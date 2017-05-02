#pragma once
#include <iostream>
#include "PacMan.h"
#include  <fstream>
#include <conio.h>
#include <stdio.h>
#include <string>

#define ARROW_UP 80
#define ARROW_DOWN 72
#define ARROW_RIGHT 77
#define ARROW_LEFT 75
#define PREF 224

/*
==========IMPORTANT CODES==========================
0-EMPTY
1-WALL
2-BEAD
4-LOOKING LEFT
5-LOOKING RIGHT
6-LOOKING UP
7-LOOKING DOWN
====================================================
*/



class Silnik
{
public:
	Silnik();
	~Silnik();

	void Odbierz_sygnal();
	virtual void View();
	void Inicjuj_Labirynt(std::string stage_name);// do protected // inicjuj ( string nazwa pliku) przyda sie przy zmienianiu zabiryntow
protected:
	static const short x=25, y=15;//???
	short Plansza[y][x];
	PacMan _PACMAN;


//	void Sprawdz_Sciany(const int & kierunek);

	void Porusz_Postacia(PacMan & _PACMAN);
	void Zmien_kierunek( short kierunek);
//	void Odbierz_sygnal();// ma byc tu

	void Licz_Pozostale_Kropki();

	short Pozostale_kropki=0;//ma byc tu

};

