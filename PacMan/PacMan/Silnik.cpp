#include "Silnik.h"



Silnik::Silnik()
{
}


Silnik::~Silnik()
{
}

void Silnik::Inicjuj_Labirynt()
{
	std::ifstream In("Stage_1.txt");

		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				In >> Plansza[i][j];
			}
		}

		In.close();
}
