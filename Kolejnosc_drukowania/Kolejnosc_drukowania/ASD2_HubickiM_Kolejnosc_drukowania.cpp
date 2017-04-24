/*///////////////////////////////////////////////////////////////////////
							PROJECT	 Printing Priority
Started on : 22.04.2017
Last Update : 24.04.2017

To do:
???

Made by Marcin Hubicki
////////////////////////////////////////////////////////////////////////*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


struct Entery
{
	bool Mine;
	short _priority;

};

void Shift(Entery * E1,const short & n)
{
	Entery tmpE;
	tmpE = E1[0];
	for (int j = 0; j < (n-1); j++)
	{
		E1[j] = E1[j + 1];
	}
	E1[n - 1] = tmpE;
}

void View(Entery * E1, const short & n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<E1[i]._priority<<"  ";
	}
	cout << endl;
}

void Print_First(Entery * E1, short & n)
{
	for (int i = 1; i < n; i++)
	{
		E1[i - 1] = E1[i];
	}
	n--;

}

short Find_highest_prio(Entery * E1, const short & n)
{
	short highest_prio=1;
	for (int j = 0; j < n; j++)
	{
		if (E1[j]._priority > highest_prio)
		{
			highest_prio = E1[j]._priority;
		}
	}
	return highest_prio;
}


int main()
{
	short cases, n, m,Mine,highest_pri=1,Timer=0;
	
	int i = 0,j=0,k=0;
	Entery tmpE;
	Entery * E1;

	cin >> cases;

	while (i < cases)
	{
		//=======READ==========================================
		cin >> n >> m;
		E1 = new Entery[n];

		for (int j = 0; j < n; j++)
		{
			cin >> E1[j]._priority;
			E1[j].Mine = false;

			if (E1[j]._priority > highest_pri)
			{
				highest_pri = E1[j]._priority;
			}
		}
		E1[m].Mine = true;
		//========================================
		while (n>=1)
		{
			k = 0;
			while (E1[k]._priority < highest_pri)
			{
				Shift(E1, n);
			}
			if (E1[0].Mine == true)
			{
				Timer += 1;
				cout << Timer << endl;
				break;
			}
			else
			{
				Print_First(E1, n);
				highest_pri = Find_highest_prio(E1, n);
				Timer += 1;
			}
		}

		highest_pri = 1;
		Timer = 0;
		i++;
		delete[] E1;
	}
	
//	system("PAUSE");
	return 0;
}