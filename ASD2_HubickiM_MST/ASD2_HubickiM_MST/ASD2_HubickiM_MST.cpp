#include <iostream>
#include <tuple>
#include <set>

class vertex
{
public:
	vertex();
	~vertex();

	long _Index;
	std::string _Name; //czy moze byc zastapione nazwa zmiennej ??
	std::set<std::tuple<short, short, short>> _Edges_tab; //wystaczy push_back by dodac
	long * _Neighbors_tab; // na podstawie tablicy krawedzi ??

};

class edge
{
public:
	edge();
	~edge();
	std::tuple< vertex, vertex, long> E;//Poczatek,koniec,wartosc

};

class graph
{
public:
	graph();
	~graph();

	vertex * Vertex_tab;
	edge * Edge_tab;
	void Fill_edges_tabs(vertex * Vertex_tab, edge * Edge_tab);// wypelni tablice krawedzi dla kazdego vertexu
	void Find_Neighbors(vertex * Vertex_tab);
	void MST();


};



int main()
{
	


	return 0;
	system("PAUSE");
}