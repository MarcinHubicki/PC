#pragma once
#include "Postac.h"
class Silnik
{
public:
	Silnik();
	~Silnik();

protected:
	short Plansza;//[][]


	void Inicjuj_Labirynt();
	void Porusz_Postacia(Postac P1);
	void Zmien_kierunek(Postac P1,short sygnal);

	void Licz_Pozostale_Kropki(short Plansza);

	short Pozostale_kropki;

};

