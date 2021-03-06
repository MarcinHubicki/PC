#pragma once
#include <iostream>
#include <Windows.h>
#include "PacMan.h"
#include  <fstream>
#include <conio.h>
#include <stdio.h>
#include <string>

#define ARROW_UP 72
#define ARROW_DOWN 80
#define ARROW_RIGHT 77
#define ARROW_LEFT 75
#define PREF 224

using std::cin;
using std::cout;
using std::endl;
/*
==============IMPORTANT CODES==========================
0-EMPTY
1-WALL(Horizontal)
2-BEAD
3-ENEMY
4-LOOKING LEFT
5-LOOKING RIGHT
6-LOOKING DOWN
7-LOOKING UP
9-WALL(Vertical)
====================================================
*/



class Silnik
{
public:
	Silnik();
	~Silnik();

	void Odbierz_sygnal();
//	void Inicjuj_Labirynt(short stage_name);
	virtual void View();
	short Stage_nr = 0;
	void Inicjuj_Labirynt(std::string stage_name);// do protected // inicjuj ( string nazwa pliku) przyda sie przy zmienianiu zabiryntow
protected:

	static const short x=25, y=15;//???

	short Plansza[y][x];
	PacMan _PACMAN;


	void Porusz_Postacia(PacMan & _PACMAN);
	void Zmien_kierunek( short kierunek);
//	void Odbierz_sygnal();// ma byc tu

	void Licz_Pozostale_Kropki();

	short Pozostale_kropki=0;//ma byc tu

	bool Sprawdz_Gore();
	bool Sprawdz_Dol();
	bool Sprawdz_Lewo();
	bool Sprawdz_Prawo();

	bool Sprawdz_klaw();
	void Odswierz_wiersz();
	void Odswierz_kolumne();
};

