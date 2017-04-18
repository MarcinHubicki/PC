/*------------------------------------------------------------------------------
PROJECT: Minimal Spanning Tree

Started on 28.03.2017
Last update : 18.04.2017

To do:
*Finding smallest value of edge out of possible choises and
chcecking if it's _MST is true/false

Made by  Marcin Hubicki
---------------------------------------------------------------------------------*/

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include<set>

using std::cin;
using std::vector;
using std::cout;
using std::endl;
using std::set;

class edge
{
public:
	long _First;
	long _Secound;
	long _value;

	struct Compare
	{
		bool operator () (const edge & E1, const edge & E2);
		//bool operator < (const edge & E);
	};


};


class edge_v
{
public:
	//edge();
	//	~edge();

	//	long _First;
	long _Secound;
	long _value;



};

class vertex
{
public:

	long _Index;
	std::string _Name;
	//vector<edge_v> _te;
	vector<edge> _Te;

	bool MST;// wyzerowac w konstruktorze !!! 
};



class graph
{
public:

	vector<vertex> _V1;
	vector<edge> _MST;


	void Read();
	void Print();
	void Prim_Algorithm(long vert_ind);
	void View_Set(set<edge, edge::Compare> S1);
	void View_MST();

	long _nv;
	long _ne;

};

void graph::Prim_Algorithm(long first_vertex_index)
{
	cout << "PRIM STARTS:" << endl;
	set<edge, edge::Compare> S1;
	std::set<edge>::iterator iter;
	edge tmpE;
	vertex tmpV;
	bool repeatSet,repeatMST;
	int j=0;

	long current=first_vertex_index, next_ind;

	while (j < 4)// ->  <nv
	{
		for (int i = 0; i < _V1[current]._Te.size(); i++)
		{
			if (j == 0)
			{
				S1.insert(_V1[current]._Te[i]);
			}
			else
			{
				for (iter = S1.begin(); iter != S1.end(); iter++)
				{
					tmpE = *iter;
					if (_V1[current]._Te[i]._First == tmpE._Secound && _V1[current]._Te[i]._Secound == tmpE._First && _V1[current]._Te[i]._value == tmpE._value)
					{
						repeatSet = true;
						break;
					}
					else
					{
						repeatSet = false;
					}
				}
				if (repeatSet == false)
				{
					tmpE._First = _V1[current]._Te[i]._Secound;
					tmpE._Secound = _V1[current]._Te[i]._First;
					tmpE._value = _V1[current]._Te[i]._value;

					for (int k = 0; k < _MST.size(); k++)
					{
						if (tmpE._First == _MST[k]._First && tmpE._Secound == _MST[k]._Secound)
						{
							repeatMST = true;
							break;
						}
						else
						{
							repeatMST = false;
						}
					}
					if (repeatMST == false)
					{
						S1.insert(_V1[current]._Te[i]);
					}
				}
			}
		}
			View_Set(S1);

			iter = S1.begin();
			tmpE = *iter;
			_MST.push_back(tmpE);
			_V1[current].MST = true;

			S1.erase(S1.begin());
			View_Set(S1);

			j++;
			current = tmpE._Secound;

			View_MST();
		}
	}


void graph::View_Set(set<edge, edge::Compare> S1)
{
	std::set<edge>::iterator iter;
	edge tmpE;

	iter = S1.begin();
	cout << "AVAILABLE EDGES:" << endl;
	for (iter = S1.begin(); iter != S1.end(); iter++)
	{
		tmpE = *iter;
		cout << tmpE._First << "  " << tmpE._Secound << "  " << tmpE._value << endl;
	}
}

void graph::View_MST()
{
	cout << "MST: " << endl;
	for (int i = 0; i < _MST.capacity(); i++)
	{
		cout << _MST[i]._First << " " << _MST[i]._Secound << " " << _MST[i]._value << endl;
	}
}




void graph::Read()
{
	int i = 0, j = 0;
	vertex tmpV;
	edge tmpe;

	std::cin >> _nv;

	while (i < _nv)
	{
		std::cin >> tmpV._Index;
		std::cin >> tmpV._Name;
		_V1.push_back(tmpV);
		i++;
	}

	std::cin >> _ne;
	while (j<_ne)
	{
		cin >> tmpe._First >> tmpe._Secound >> tmpe._value;
		_V1[tmpe._First]._Te.push_back(tmpe);

		std::swap(tmpe._First, tmpe._Secound);
		
		_V1[tmpe._First]._Te.push_back(tmpe);
		j++;

	}
}

void graph::Print()
{
	int j = 0;
	long tmpInd;
	while (j < _nv)
	{
		cout << _V1[j]._Name<<" " << _V1[j]._Index <<endl;
		cout << "Fir: " << "  " << "Sec: " << "  " << "Val: " << endl;
		for (int k = 0; k< _V1[j]._Te.size(); k++)
		{
			tmpInd = _V1[j]._Te[k]._Secound;
			cout  << _V1[j]._Te[k]._First<<"      " << _V1[tmpInd]._Name<<"  ";
			cout  << _V1[j]._Te[k]._Secound << "   ";
			cout  << _V1[j]._Te[k]._value << endl;
		}
		j++;
		cout <<endl<< endl;
	}

}

bool edge::Compare::operator()(const edge & E1, const edge & E2)
{
	if (E1._value > E2._value)
	{
		return false;
	}
	else
		return true;
}


int main()
{

	graph G1;
	G1.Read();
	G1.Print();
	G1.Prim_Algorithm(0);

	return 0;
	system("PAUSE");
}
////////////////////////////////////////////////////////////////////////////////////////////
//long nv, ne;
//int i = 0, j = 0;
////int * k;
//vertex tmpV;
//edge tmpE;
//
//vector<vertex> V1;
////vector<vertex>::iterator iter;
//
//std::cin >> nv;
//cout << nv << endl;
//
//while (i < nv)
//{
//	std::cin >> tmpV._Index;
//	std::cin >> tmpV._Name;
//	V1.push_back(tmpV);
//	cout << tmpV._Index << " " << tmpV._Name << endl;
//
//	i++;
//}
//
//std::cin >> ne;
//cout << ne << endl;
//
//while (j<ne)
//{
//	cin >> tmpV._Index;
//	cin >> tmpE._Secound >> tmpE._value;
//	V1[tmpV._Index]._te.push_back(tmpE);
//	std::swap(tmpV._Index, tmpE._Secound);//
//	V1[tmpV._Index]._te.push_back(tmpE);//
//										//cout << "Sec: " << tmpE._Secound << " Val: " << tmpE._value << endl;
//	j++;
//}
//
//j = 0;
//while (j < nv)
//{
//	cout << V1[j]._Name << endl;
//	for (int k = 0; k< V1[j]._te.size(); k++)// dodac krawedz z wczesniejszego ver/ do aktualnego np dla 1 kr. 0,1 
//	{
//		cout << V1[j]._te[k]._Secound << " " << V1[j]._te[k]._value << "		";
//	}
//	j++;
//	cout << endl;
//}


//while (j < _nv)
//{
//	cout << _V1[j]._Name << endl;
//	for (int k = 0; k< _V1[j]._te.size(); k++)
//	{
//		cout << _V1[j]._te[k]._Secound << " " << _V1[j]._te[k]._value << "	";
//	}
//	j++;
//	cout << endl;
//}

//while (j<_ne)
//{
//	cin >> tmpV._Index;
//	cin >> tmpE._Secound >> tmpE._value;

//	_V1[tmpV._Index]._te.push_back(tmpE);
//	std::swap(tmpV._Index, tmpE._Secound);//
//	_V1[tmpV._Index]._te.push_back(tmpE);//
//	j++;
//}


//for (iter = S1.begin(); iter != S1.end(); iter++)
//{
//	tmpE = *iter;
//	if (_V1[current]._Te[i]._First == tmpE._Secound && _V1[current]._Te[i]._Secound == tmpE._First && _V1[current]._Te[i]._value == tmpE._value)
//	{

//	}
//	else
//	{			
//		tmpE._First = _V1[current]._Te[i]._Secound;
//		tmpE._Secound = _V1[current]._Te[i]._First;
//		tmpE._value = _V1[current]._Te[i]._value;
//		for (int k = 0; k < _MST.size(); k++)
//		{

//			if (tmpE._First == _MST[k]._First && tmpE._Secound == _MST[k]._Secound)
//			{
//				repeat = true;
//				break;
//			}
//			else
//			{
//				repeat = false;
//			}
//		}
//		if (repeat == false)
//		{
//			S1.insert(_V1[current]._Te[i]);
//		}
//		break;
//	}

//}

//tmpE._First = _V1[current]._Te[i]._Secound;
//tmpE._Secound = _V1[current]._Te[i]._First;
//tmpE._value = _V1[current]._Te[i]._value;

/*
for (int k = 0; k < _MST.size(); k++)
{

if (tmpE._First == _MST[k]._First && tmpE._Secound == _MST[k]._Secound)
{
repeat = true;
break;
}
else
{
repeat = false;
}
}
if (repeat == false)
{
iter = S1.find(tmpE);
if (iter != S1.end())
{
S1.insert(_V1[current]._Te[i]);
}
}*/

// to be continued. . .

//do
//{
//	for (int i = 0; i < _V1[current]._Te.capacity(); i++)
//	{
//		if (j == 0)
//		{
//			S1.insert(_V1[current]._Te[i]);
//		}
//		else
//		{
//			tmpE._First = _V1[current]._Te[i]._First;
//			tmpE._Secound = _V1[current]._Te[i]._Secound;
//		//	tmpE._value = _V1[current]._Te[i]._value;
//			
//			for (int k = 0; k < _MST.capacity(); k++)
//			{
//				if (tmpE._First != _MST[k]._First)
//				{
//					S1.insert(_V1[current]._Te[i]);
//				}
//			}
//		}
//	}
//	View_Set(S1);

//	iter = S1.begin();
//	tmpE = *iter;
//	_MST.push_back(tmpE);
//	_V1[current].MST = true;

//	S1.erase(S1.begin());
//	View_Set(S1);
//	current = tmpE._Secound;
//	j++;

//} while (j < 3);// <nv -1 ?