#include <iostream>
//#include <tuple>
//#include <set>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using std::cin;
using std::vector;
using std::cout;
using std::endl;

class edge
{
public:
	//edge();
	//	~edge();

	//	long _First;
	long _Secound;
	long _value;


	//	std::tuple< vertex, vertex, long> E;//Poczatek,koniec,wartosc

};

class vertex
{
public:
	//	vertex();
	//	~vertex();

	long _Index;
	std::string _Name; //czy moze byc zastapione nazwa zmiennej ??

	vector<edge> _te;

	//std::set<std::tuple<short, short, short>> _Edges_tab; //wystaczy push_back by dodac
	long * _Neighbors_tab; // na podstawie tablicy krawedzi ??

};



class graph
{
public:
//	graph();
//	~graph();
	vector<vertex> V1;
	//vertex * Vertex_tab;
	//edge * Edge_tab;

	void Read();
	void Print();
	void Fill_edges_tabs(vertex * Vertex_tab, edge * Edge_tab);// wypelni tablice krawedzi dla kazdego vertexu
	void Find_Neighbors(vertex * Vertex_tab); //znajdzie sasiadow danego vertexu
	void MST();
	
	long _nv;
	long _ne;

};



int main()
{

	graph G1;
	G1.Read();
	G1.Print();


	return 0;
	system("PAUSE");
}

void graph::Read()
{
	int i = 0,j=0;
	vertex tmpV;
	edge tmpE;

	std::cin >> _nv;

	while (i < _nv)
	{
		std::cin >> tmpV._Index;
		std::cin >> tmpV._Name;
		V1.push_back(tmpV);
		//cout << tmpV._Index << " " << tmpV._Name << endl;
		i++;
	}

	std::cin >> _ne;

	while (j<_ne)
	{
		cin >> tmpV._Index;
		cin >> tmpE._Secound >> tmpE._value;

		V1[tmpV._Index]._te.push_back(tmpE);
		std::swap(tmpV._Index, tmpE._Secound);//
		V1[tmpV._Index]._te.push_back(tmpE);//
		//cout << "Sec: " << tmpE._Secound << " Val: " << tmpE._value << endl;
		j++;
	}

}

void graph::Print()
{
	int j = 0;
	while (j < _nv)
	{
		cout << V1[j]._Name << endl;
		for (int k = 0; k< V1[j]._te.size(); k++)
		{
			cout << V1[j]._te[k]._Secound << " " << V1[j]._te[k]._value << "	";
		}
		j++;
		cout << endl;
	}
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
