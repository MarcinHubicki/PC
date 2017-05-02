#include <iostream>
#include "Gra.h"
#include"PacMan.h"
#include "Przeciwnik.h"
#include <conio.h>


int main()
{
	long key,asd=0;

	Gra G;
	G.Inicjuj_Labirynt("Stage_0.txt");
	G.View();
	//std::cout << "POZOSTALE: " << G.Pozostale_kropki << std::endl;
	G.Odbierz_sygnal();

	system("PAUSE");
	return 0;
}