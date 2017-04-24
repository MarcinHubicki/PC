#include "Gra.h"

Gra::Gra()
{
}


Gra::~Gra()
{
}

void Gra::View()
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			switch (Plansza[i][j])
			{
			case 1:
				
				std::cout<<"X";
				break;

			case 2:
				std::cout << "o";
				break;
			case 3:
				std::cout << "^";
				break;
			}	 
		}
		std::cout << std::endl;
	}
}
