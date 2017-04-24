#include <iostream>
#include "Gra.h"
#include"PacMan.h"
#include "Przeciwnik.h"


int main()
{


	Gra G;
	G.Inicjuj_Labirynt();
	G.View();

	system("PAUSE");
	return 0;
}