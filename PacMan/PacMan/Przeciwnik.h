#pragma once
#include "Postac.h"
class Przeciwnik : public Postac
{
public:
	Przeciwnik();
	~Przeciwnik();

	void Zbliz_sie(short _x, short _y);
};

