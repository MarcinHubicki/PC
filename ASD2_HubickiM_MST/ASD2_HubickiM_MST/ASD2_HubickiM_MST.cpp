/*------------------------------------------------------------------------------
PROJECT: Minimal Spanning Tree

Started on 28.03.2017
Last update : 22.04.2017


To do:
???

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

class vertex
{
public:

	long _Index;
	std::string _Name;
	vector<edge> _Te;

	bool MST;
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
	bool repeatSet, repeatMST;
	int j = 0, k, counter = 0;

	long current = first_vertex_index;

	while (j < (_nv - 1))// ->  <nv
	{
		for (int i = 0; i < _V1[current]._Te.size(); i++)
		{
			if (j == 0)
			{
				S1.insert(_V1[current]._Te[i]);
			}
			else
			{
				repeatSet = false;
				for (iter = S1.begin(); iter != S1.end(); iter++)
				{
					tmpE = *iter;

					if (_V1[current]._Te[i]._First == tmpE._Secound && _V1[current]._Te[i]._Secound == tmpE._First)
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

					repeatMST = false;
					for (k = 0; k < _MST.size(); k++)
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

		while (_V1[tmpE._Secound].MST != false)
		{
			iter++;
			tmpE = *iter;
		}

		_MST.push_back(tmpE);
		_V1[tmpE._First].MST = true;
		_V1[tmpE._Secound].MST = true;

		S1.erase(iter);


		j++;
		current = tmpE._Secound;
		//counter++;

		View_MST();
		//cout << "counter" << counter << endl;
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
		cout << _V1[tmpE._First]._Name << "  " << _V1[tmpE._Secound]._Name << "  " << tmpE._value << endl;
	}
}

void graph::View_MST()
{
	cout << "MST: " << endl;
	for (int i = 0; i < _MST.size(); i++)
	{
		cout << _V1[_MST[i]._First]._Name << " " << _V1[_MST[i]._Secound]._Name << " " << _MST[i]._value << endl;
	}
}




void graph::Read()
{
	int i = 0, j = 0;
	vertex tmpV;
	edge tmpe;

	tmpV.MST = false;

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
	if (E1._value >= E2._value)
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
