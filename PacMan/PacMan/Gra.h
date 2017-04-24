#pragma once
#include "Silnik.h"
class Gra : 	public Silnik
{
public:
	Gra();
	virtual ~ Gra();

	short Oddaj_Sygnal();
	bool Graj();
	virtual void View();

};

