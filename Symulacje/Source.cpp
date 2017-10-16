#include <iostream>
#include <math.h>


using namespace std;

int fun1(int & xi)
{
	int a = 12, c = 31123, m = 1234;


	xi = (a*xi + c) % m;

	return xi;
}



int main()
{

	int X[1500];
	int xi = 1234;
	int	m = 1200;
	double rm = double(m - 1);
	for (int i = 0; i < 1500; i++)
	{

		X[i] = fun1(xi);
		cout << X[i] << endl;
		xi = X[i];

	}

	cout << "===================================================================================";

	double Y[1500];
	double yi = 0;
	for (int j = 0; j < 1500; j++)
	{
		yi = double(X[j]) /rm;
		Y[j] = yi;
		cout << Y[j] << endl;

	}

	double srY = 0.0, srY2 = 0.0, srY3 = 0.0;
	double sumY=0.0, sumY2 = 0.0, sumY3 = 0.0;

	for (int l = 0; l < 1500;l++)
	{
		sumY = sumY + Y[l];
		sumY2 = sumY2 + Y[l] * Y[l];
		sumY3 = sumY3 + Y[l] * Y[l] * Y[l];
	}

	cout << "===================================================================================" << endl;
		srY = sumY / 1500;
		srY2= sumY2 / 1500;
		srY3= sumY3 / 1500;
		cout << srY<<"	"<< srY2<<"		 "<< srY3 << endl;

	
		cout << "===================================================================================";


		int nt[10];

		for (int n = 0;n < 10;n++)
		{
			nt[n] = 0;
			cout << nt[n];
		}
		system("pause");

		for (int m = 0;m < 1500;m++)
		{
			nt[int(Y[m] / 0.1)]++;
		}

		for (int o = 0; o < 10; o++)
		{
			
			cout << nt[o] << " " << o << endl;
		}

		cout << "===================================================================================";
	system("pause");
	return 0;
}