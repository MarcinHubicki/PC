#pragma once
#include "Postac.h"
class PacMan :	public Postac
{
public:
	PacMan();
	~PacMan();

	short Zjedz(short x, short y);
	void Umrzyj();
	short _Ilosc_zyc;

};

