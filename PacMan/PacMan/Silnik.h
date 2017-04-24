#pragma once
#include <iostream>
#include "Postac.h"
#include  <fstream>
#include <conio.h>
#include <stdio.h>

class Silnik
{
public:
	Silnik();
	~Silnik();

	void Inicjuj_Labirynt();// do protected
protected:
	static const short x=25, y=15;//???
	short Plansza[y][x];



//	void Porusz_Postacia(Postac P1);
//	void Zmien_kierunek(Postac P1,short sygnal);

//	void Licz_Pozostale_Kropki(short Plansza);

	short Pozostale_kropki;

};

