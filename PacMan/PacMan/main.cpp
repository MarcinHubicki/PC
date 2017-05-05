#include <iostream>
#include "Gra.h"
#include"PacMan.h"
#include "Przeciwnik.h"
#include <conio.h>


int main()
{
	long key,asd=0;

	Gra G;
	G.Inicjuj_Labirynt("0.txt");
	G.View();
	G.Odbierz_sygnal();

	system("PAUSE");
	return 0;
}