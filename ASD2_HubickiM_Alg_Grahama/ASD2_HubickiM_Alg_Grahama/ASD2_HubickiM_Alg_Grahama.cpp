#include <iostream>
#include <vector>
#include <math.h>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

class Point
{
public:

	Point();
	~Point();

	long _x;
	long _y;
	short _alpha;
};


Point::Point()
{
	_x = 0;
	_y = 0;
	_alpha = 0;

}

Point::~Point()
{

}

class  Convex_shell
{
public:
	Convex_shell();
	~Convex_shell();

	void read();
	void View();
	void Graham(Point Starter);

	vector<Point> _LPoints;
	vector<Point> _SPoints;

	short _L=0, _S=0;


};
Convex_shell::Convex_shell()
{

}

Convex_shell::~Convex_shell()
{
}

void Convex_shell::read()
{
	int i = 0, j = 0;
	Point tmpP;

	cin >> _L;

	while (i < _L)
	{
		cin >> tmpP._x;
		cin >> tmpP._y;
		_LPoints.push_back(tmpP);
		i++;
	}
	i = 0;
	cin >> _S;

	while (i < _S)
	{
		cin >> tmpP._x;
		cin >> tmpP._y;
		_SPoints.push_back(tmpP);
		i++;
	}

}

void Convex_shell::View()
{
	int i = 0;
	while (i < _LPoints.size())
	{
		cout << _LPoints[i]._x <<"	"<< _LPoints[i]._y << endl;
		i++;
	}
	i = 0;
	while (i < _SPoints.size())
	{
		cout << _SPoints[i]._x << "	" << _SPoints[i]._y << endl;
		i++;
	}
}

void Convex_shell::Graham(Point Starter)
{
	double odleglosc = 0,najkrotsza=9999;
	int i = 0,nr_pkt=0;

	while (i < _L)
	{
		odleglosc = sqrt(abs(pow(_LPoints[i]._x - Starter._x, 2) + pow(_LPoints[i]._y - Starter._y, 2)));
		if (odleglosc < najkrotsza)
		{
			najkrotsza = odleglosc;
			nr_pkt = i;
		}
		cout<<"Odl: " << odleglosc << "   Najkr:" << najkrotsza<<endl;
		i++;
	}



}


int main()
{
	Point tmpP;
	tmpP._x = 7;
	tmpP._y = 3;
	Convex_shell C;
	C.read();
//	C.View();
	C.Graham(tmpP);


	system("pause");
	return 0;
}