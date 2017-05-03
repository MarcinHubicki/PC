#include "Silnik.h"



Silnik::Silnik()
{
}


Silnik::~Silnik()
{
}

//void Silnik::Inicjuj_Labirynt(short stage_name)
//{
//	char* tmp = (char *)stage_name;
//	std::ifstream In(tmp);
//
//	for (int i = 0; i < y; i++)
//	{
//		for (int j = 0; j < x; j++)
//		{
//			In >> Plansza[i][j];
//			if (Plansza[i][j] == 4)
//			{
//				_PACMAN._x = j;
//				_PACMAN._y = i;
//			}
//		}
//	}
//
//	In.close();
//	Licz_Pozostale_Kropki();
//}
void Silnik::Inicjuj_Labirynt(std::string stage_name)
{
	std::ifstream In(stage_name);

		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				In >> Plansza[i][j];
				if (Plansza[i][j] == 4)
				{
					_PACMAN._x = j;
					_PACMAN._y = i;
				}
			}
		}

		In.close();
		Licz_Pozostale_Kropki();
}



void Silnik::Porusz_Postacia(PacMan & _PACMAN)//sprawdz
{
	bool wall = false;
	switch (_PACMAN._kierunek_Poruszania)
	{
	case PacMan::kierunek::DOWN :
		wall = Sprawdz_Dol();
		if (wall == true)
		{
			break;
		}
		else
		{
			Plansza[_PACMAN._y][_PACMAN._x] = 0;
			_PACMAN._y++;
			if (Plansza[_PACMAN._y][_PACMAN._x] == 2) { Pozostale_kropki--; }
			Plansza[_PACMAN._y][_PACMAN._x] = 6;
			break;
		}

	case PacMan::kierunek::UP:
		wall=Sprawdz_Gore();
		if (wall == true)
		{
			break;
		}
		else
		{
			Plansza[_PACMAN._y][_PACMAN._x] = 0;
			_PACMAN._y--;
			if (Plansza[_PACMAN._y][_PACMAN._x] == 2) { Pozostale_kropki--; }
			Plansza[_PACMAN._y][_PACMAN._x] = 7;
			break;
		}


	case PacMan::kierunek::LEFT:
		wall = Sprawdz_Lewo();
		if (wall == true)
		{
			break;
		}
		else
		{
			Plansza[_PACMAN._y][_PACMAN._x] = 0;
			_PACMAN._x--;
			if (Plansza[_PACMAN._y][_PACMAN._x] == 2) { Pozostale_kropki--; }
			Plansza[_PACMAN._y][_PACMAN._x] = 4;
			break;
		}

			
	case PacMan::kierunek::RIGHT:
		wall = Sprawdz_Prawo();
		if (wall == true)
		{
			break;
		}
		else
		{
			Plansza[_PACMAN._y][_PACMAN._x] = 0;
			_PACMAN._x++;
			if (Plansza[_PACMAN._y][_PACMAN._x] == 2) { Pozostale_kropki--; }
			Plansza[_PACMAN._y][_PACMAN._x] = 5;
			break;
		}
		

	default:
		std::cout << "DEFAULT!!" << std::endl;
		break;

	}


}

void Silnik::Zmien_kierunek(short kierunek)
{
	_PACMAN._kierunek_Poruszania = kierunek;

}

void Silnik::Odbierz_sygnal()
{
	bool end = false; 
	short key;

	while (end != true)
	{
		key = getch();

		switch (key)
		{
		case PREF:
			key = getch();
			switch (key)
			{
			case ARROW_DOWN:
				Zmien_kierunek(PacMan::kierunek::DOWN);
				Porusz_Postacia(_PACMAN);
				system("cls");
				View();
				break;

			case ARROW_UP:
				Zmien_kierunek(PacMan::kierunek::UP);
				Porusz_Postacia(_PACMAN);
				system("cls");
				View();
				break;

			case ARROW_LEFT:
				Zmien_kierunek(PacMan::kierunek::LEFT);
				Porusz_Postacia(_PACMAN);
				system("cls");
				View();
				break;

			case ARROW_RIGHT:
				Zmien_kierunek(PacMan::kierunek::RIGHT);
				Porusz_Postacia(_PACMAN);
				system("cls");
				View();
				break;
			}
			key = 0;
			break;

		case 27: //esc
			std::cout << "ESC" << std::endl;
			end = true;
			break;

		default :
			std::cout << "ERROR: " << key<<std::endl;
		}
		if (Pozostale_kropki == 0) { end = true; }
	}
	if (end == true)// do zmiany 
	{
		system("cls");
		std::cout << "CONGRATULATIONS! STAGE " << Stage_nr << " COMPLETE" << std::endl;
		Stage_nr++;

	}
	
}

void Silnik::Licz_Pozostale_Kropki()
{

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (Plansza[i][j] == 2)
			{
				Pozostale_kropki += 1;
			}
			
		}
	}
}

bool Silnik::Sprawdz_Gore()
{
	if (Plansza[_PACMAN._y-1][_PACMAN._x]==1)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

bool Silnik::Sprawdz_Dol()
{
	if (Plansza[_PACMAN._y + 1][_PACMAN._x] == 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Silnik::Sprawdz_Lewo()
{
	if (Plansza[_PACMAN._y ][_PACMAN._x-1] == 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Silnik::Sprawdz_Prawo()
{
	if (Plansza[_PACMAN._y][_PACMAN._x + 1] == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Silnik::View()
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			switch (Plansza[i][j])
			{
			case 0:
				std::cout << " ";
				break;
			case 1:
				std::cout << "X";
				break;

			case 2:
				std::cout << "o";
				break;
			case 3:
				std::cout << "^";
				break;
			case 4:
				std::cout << ">";
				break;
			case 5:
				std::cout << "<";
				break;
			case 6:
				std::cout << "^";
				break;
			case 7:
				std::cout << "v";
				break;
			}
		}
		std::cout << std::endl;
	}
	std::cout << "OBJECTS LEFT: " << Pozostale_kropki <<std:: endl;
	std::cout << "LIFES LEFT: " << _PACMAN._Ilosc_zyc << std::endl;
}