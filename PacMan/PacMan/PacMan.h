#pragma once
#include "Postac.h"
class PacMan :	public Postac
{
public:
	PacMan();
	~PacMan();

//	short Zjedz(const short & key );
//	void Umrzyj();
	short _Ilosc_zyc=4;
	
	enum kierunek
	{
		UP,
		DOWN,
		LEFT,
		RIGHT
	};

};

