/*----------------------------------------------------------------------------------------------------
								PROJECT HASH_TABLE
Started version 1.0 on : 21.02.2017
Last Update: version 1.5 on : 10.03.2017
What is new:

-Script reading added
-fixed deleteing
-fixed no parameter constructor
-changed Set_size()
-added most of the comments
-constructor with parameter was scrapped

To do:
-change Print() to show only necessary info. for the task

Made by Marcin Hubicki
----------------------------------------------------------------------------------------------------*/


#include <iostream>
#include <string>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Entery
{
	long _key;
	string _text;
	short _chain;
};


class Hash_table 
{
public:

	enum Chain
	{
		Empty,
		Full,
		Chained
	};

	Hash_table();
	~Hash_table();

	long Get_index(const int & key,const int & size);

	void Add(const Entery & e1);
	void Delete(const long & key);
	void Print();
	void Set_Size(const int & size);
	void qdelete(Entery & entery);

protected:
	Entery * Entery_Table;
	int _size;

};//class

void Hash_table::Add(const Entery & entery)
{
	long index = Get_index(entery._key, _size);
	
	
	if (Entery_Table[index]._chain == Chain::Empty)
	{
		Entery_Table[index]._key = entery._key;

		Entery_Table[index]._text = entery._text;

		Entery_Table[index]._chain = Chain::Full;
	}//if
	else
	{
		Entery_Table[index]._chain=Chain::Chained;

		long  chained_index = Entery_Table[index]._key;

		while (1)
		{
			
			chained_index++;
			chained_index=Get_index(chained_index,_size);
			
			if (Entery_Table[chained_index]._chain == Chain::Empty)
			{
				Entery_Table[chained_index]._key = entery._key;

				Entery_Table[chained_index]._text = entery._text;

				Entery_Table[chained_index]._chain = Chain::Full;
				
				break;
			}//if
			else
			{
				Entery_Table[chained_index]._chain = Chain::Chained;
			}//else
		}// while
	}//else
}//method

void Hash_table::Print()
{
	int i = 0;
	//key will be different from 0 when there's an entery added at certain index in table
	// if it equals 0 it wasn't changed from the begining or it was deleted

		for (i = 0; i < _size; i++)
		{
			if (Entery_Table[i]._key != -1)
	            {	

					cout << i;
					//space
					cout << " ";
					//key
					cout << Entery_Table[i]._key;
					//space
					cout << " ";
					//text
					cout << Entery_Table[i]._text;
					//space
					cout << " ";
					//chain
					cout << Entery_Table[i]._chain;
					cout << endl;
				}
		}
		cout <<endl;
}

long Hash_table::Get_index(const int & key,const int & size)
{
	//getting index 
	long index;
	index = key%size;

	return index;
}//method

void Hash_table::qdelete(Entery & entery)
{
	//switching values to neutral
	entery._key = -1;
	entery._text = "";
	entery._chain = Chain::Empty;
}//method

void Hash_table::Delete(const long & key)
{
	long j=0, k;
	Entery tmp,tmp2;
	long deleted_ind,k_ind;

	for (int i = 0; i < _size; i++)
	{
		if (Entery_Table[i]._key == key)
		{
			deleted_ind = Get_index(Entery_Table[i]._key, _size);
			j = deleted_ind;
			
			qdelete(Entery_Table[i]);

			while (j<_size)
			{
				k = j;
				//next = j + 1;
				tmp = Entery_Table[j];

					if (tmp._key != -1)
					{
						if(tmp._chain==Chain::Chained)
						{
							//k++;
							k_ind = Get_index(k, _size);
								while (Entery_Table[k_ind]._chain == Chain::Chained)
								{
									tmp2 = Entery_Table[k_ind];
									qdelete(Entery_Table[k_ind]);
									Add(tmp2);
									k++;
									k_ind = Get_index(k, _size);
								}

								tmp2 = Entery_Table[k_ind];
								qdelete(Entery_Table[k_ind]);
								Add(tmp2);
						}
						else
						{
							qdelete(Entery_Table[j]);
							Add(tmp);
						}
					}//if
					j++;
			}//while
		}//if
	}//for
}//method

Hash_table::Hash_table()
{
	//only makes an instance. Initialization is made in Set_size


}//method

void Hash_table::Set_Size(const int & size)
{
	// setting size to given
	_size = size;
	Entery_Table = new Entery[_size];

	//setting all values to neutral
	for (int i = 0; i < _size; i++)
	{
		Entery_Table[i]._key = -1;
		Entery_Table[i]._text = "";
		Entery_Table[i]._chain = Chain::Empty;
	}//if

}//method

Hash_table::~Hash_table()
{
	delete[] Entery_Table;
}//method

//MAIN
int main()
{
	Hash_table * H1;
	Entery e1;
	long Cases,key;
	int size;
	string text,command;
	
	//cout << "How many cases?"<<endl;
	cin >> Cases;
	H1 = new Hash_table[Cases];
	//cout << Cases << endl;

for( long i=0; i<Cases; i++)
{
		cin >> command;
		while (command != "stop")
		{
			if (command == "size")
			{
				cin >> size;
				H1[i].Set_Size(size);
				//cout << "Size set to:" << size<<endl;

			}
			if (command == "add")
			{
				cin >> key;
				cin >> text;
				e1._key = key;
				e1._text = text;
				H1[i].Add(e1);
			//	cout << "Added key:" << key << endl;;
			}

			if (command == "print")
			{
				H1[i].Print();
			}

			if (command == "delete")
			{
				cin >> key;
				H1[i].Delete(key);
			//	cout << "Deleted key:" << key<<endl;
			}
			cin >> command;
		}
	}

	system("PAUSE");
	return 0;
}//MAIN

//===================SCRAPPED======================================

//int Get_index(int key, int size)
//{
//	int index;
//	index = key%size;
//
//	return index;
//}

//void Add(int key, char text[8]);

//void Hash_table ::  Add( int key, char text[8])
//{
//	
//	int tmp = 0;
//	tmp = Get_index(key, _size);
//	
//	//hashing function
//	if (E1[tmp]._key = 0)
//	{
//		E1[tmp]._key = key;
//
//		for (int i = 0; i < 8; i++)
//		{
//			E1[tmp]._text[i] = text[i];
//		}
//
//		E1[tmp]._index = tmp;
//	}
//	//open addresing function ( index+=1 ) 
//	else
//	{
//		//...
//
//	}
//}
//void Hash_table::Delete(int key)
//{
//	//Deleting entery by reseting values to preset 
//	for (int i = 0; i < _size; i++)
//	{
//		if (Entery_Table[i]._chain == Chain::Full)
//		{
//			Entery_Table[i]._key = 0;
//			Entery_Table[i]._chain = Chain::Empty;
//			Entery_Table[i]._text = "";
//		}//if
//		else
//		{
//			if (Entery_Table[i]._chain == Chain::Chained)
//			{
//
//
//
//
//			}//if
//
//
//
//		}//else
//	}//for
//}//method

//{
//long chained_index;
//long tmp_index;
//int oryginal_next;
//int prev;
//int next;
//int next2;
//int j;
////Deleting entery by reseting values to preset 
//for (int i = 0; i < _size; i++)
//{
//
//	if (Entery_Table[i]._key == key)
//	{
//		//if the entery that is being deleted is Full we check the previous entery to see if what we're deleting is
//		// an end of chain or not. 
//		if (Entery_Table[i]._chain == Chain::Full)
//		{
//			prev = i;
//			prev--;
//
//			if (Entery_Table[prev]._chain != Chain::Chained)
//			{
//				qdelete(Entery_Table[i]);
//			}//if
//			else
//			{
//				while (Entery_Table[prev]._chain == Chain::Chained)
//				{
//
//
//				}//while
//			}//else
//		}//if
//		 //if the entery that is being deleted is a part of a chain we're checking next entery.
//		 //if it's Full we delete the entery and copy the next one to the place as close to it's rightfull
//		 //index as possible
//
//		if (Entery_Table[i]._chain == Chain::Chained)
//		{
//			next = i;
//			prev = i;
//			prev--;
//			next++;
//			oryginal_next = next;
//
//			// jest zle przepisze ostatni wpis przed wolnym polem zamiast wlasciwego <- do poprawy tak samo jak chain
//			if (Entery_Table[next]._chain == Chain::Full)
//			{
//				qdelete(Entery_Table[i]);
//
//				while (1)
//				{
//					//tmp_index = Get_index(Entery_Table[next]._key, _size);
//					tmp_index = next%_size;
//					if (Entery_Table[tmp_index]._chain == Chain::Empty)
//					{
//						tmp_index--;
//						Entery_Table[i]._key = Entery_Table[tmp_index]._key;
//						Entery_Table[i]._text = Entery_Table[tmp_index]._text;
//						Entery_Table[i]._chain = Chain::Full;
//						qdelete(Entery_Table[tmp_index]);
//						break;
//					}//if
//					else
//					{
//						Entery_Table[next]._chain = Chain::Chained;
//						next++;
//					}//else
//				}//while
//			}//if
//		}//if
//
//		if (Entery_Table[next]._chain == Chain::Chained)
//		{
//			next = i;
//			prev = i;
//			prev--;
//			next++;
//
//
//			qdelete(Entery_Table[i]);
//
//			// powtorzyc jesli kolejne sa kolejne w lancuchu
//			while (1)
//			{
//				tmp_index = next%_size;
//
//				if (Entery_Table[tmp_index]._chain == Chain::Empty)
//				{
//					tmp_index--;
//					Entery_Table[i]._key = Entery_Table[tmp_index]._key;
//					Entery_Table[i]._text = Entery_Table[tmp_index]._text;
//					Entery_Table[i]._chain = Chain::Full;
//					qdelete(Entery_Table[tmp_index]);
//					break;
//				}//if
//				else
//				{
//					Entery_Table[next]._chain = Chain::Chained;
//					next++;
//				}//else
//
//			}//while
//		}//if
//	}//if
//}//for
//}//method

//Hash_table(const int & size);

//Hash_table::Hash_table(const int & size)
//{
//	Set_Size(size);
//	//making dynamic table for given size
//	Entery_Table = new Entery[_size];
//
//	//setting all values to 0
//	for (int i = 0; i < _size; i++)
//	{
//		Entery_Table[i]._key = -1;
//		Entery_Table[i]._text = "";
//		Entery_Table[i]._chain = Chain::Empty;
//	}
//}



//if (Entery_Table[i]._key == key)
//{
//
//	qdelete(Entery_Table[i]);
//
//	while (j < _size)
//	{
//		tmp = Entery_Table[j];
//
//		if (tmp._key != -1)
//		{
//			qdelete(Entery_Table[j]);
//			Add(tmp);
//		}//if
//
//		j++;
//	}//while

//void Hash_table::Delete(const long & key)
//{
//	long j = 0;
//	Entery tmp;
//	long deleted_ind;
//
//	for (int i = 0; i < _size; i++)
//	{
//		if (Entery_Table[i]._key == key)
//		{
//			deleted_ind = Get_index(Entery_Table[i]._key, _size);
//			qdelete(Entery_Table[i]);
//			j = deleted_ind;
//			while (1)
//			{
//				if (j == _size) { j = 0; }
//				tmp = Entery_Table[j];
//
//				if (tmp._key != -1)
//				{
//
//					//if (tmp._chain == Chain::Chained)
//					//{
//					//	if (Entery_Table[j - 1]._chain != Chain::Chained)
//					//	{
//					//		//qdelete(Entery_Table[j]);
//					//		//Add(tmp);
//					//	}//zle!!!
//
//					//}
//					//else
//					//{
//					qdelete(Entery_Table[j]);
//					Add(tmp);
//					//	}
//
//
//				}//if
//
//				j++;
//				if (j == deleted_ind) { break; }
//			}//while
//		}//if
//	}//for
//}//method