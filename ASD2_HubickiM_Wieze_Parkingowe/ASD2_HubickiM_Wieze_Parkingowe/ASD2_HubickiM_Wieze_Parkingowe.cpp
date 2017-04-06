/*/////////////////////////////////////////////////////////////////////
						PROJECT PARKING TOWERS
Started on 06.04.2017
Ended on 06.04.2017

To do:
???

Made by Marcin Hubicki
*///////////////////////////////////////////////////////////////////////
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Fill_floors(int ** Tower,const int & floors,const int & slots)
{
	int j=0,car_ind;

	for (int i = 0; i < floors; i++)
	{
		while (j < slots)
		{
			cin >> car_ind;
			Tower[i][j] = car_ind;
			j++;
		}
		j = 0;
	}
}

int Count_Cars(int ** Tower, const int & floors, const int & slots)
{
	int No_of_cars = 0;
	for (int i = 0; i < floors; i++)
	{
		for (int j = 0; j < slots; j++)
		{
			if (Tower[i][j] != -1)
			{
				No_of_cars += 1;
			}
		}
	}
	return No_of_cars;
}

void View_Tower(int ** Tower, const int & floors, const int & slots, int & Time)
{
	int j = 0;
	for (int i = 0; i < floors; i++)
	{
		while (j < slots)
		{
			cout << Tower[i][j]<<" ";
			j++;
		}
		j = 0;
		cout << endl;
	}
	cout << "TIME:" << Time<<endl;
}

void Rotate_Left(int ** Tower,const int & curr_floor, const int & slots)
{
	int j = 0;
	int * tmp_floor = new int[slots];

	for (int i = 0; i < slots-1; i++)
	{
		tmp_floor[i + 1] = Tower[curr_floor][i];

	}

	tmp_floor[0] = Tower[curr_floor][slots-1];

	while (j < slots)
	{
		Tower[curr_floor][j] = tmp_floor[j];
		j++;
	}
}

void Rotate_Right(int ** Tower, const int & curr_floor, const int & slots)
{
	int j = 0;
	int * tmp_floor = new int[slots];

	for (int i = 1; i < slots; i++)
	{
		tmp_floor[i - 1] = Tower[curr_floor][i];

	}
	tmp_floor[slots - 1] = Tower[curr_floor][0];

	while (j < slots)
	{
		Tower[curr_floor][j] = tmp_floor[j];
		j++;
	}
}

void Return_car(int ** Tower, const int & Curr_floor, const int & slots, const int & Car_position, int & Time)
{
	int middle = slots / 2;
	int Flor_cpy = Curr_floor;

		if (Car_position <= middle)
		{
			for (int i = 0; i < Car_position; i++)
			{
				Rotate_Right(Tower, Curr_floor, slots);
				Time = Time + 5;
			}
		}
		else
		{
			for (int i = 0; i < slots-Car_position; i++)
			{
				Rotate_Left(Tower, Curr_floor, slots);
				Time = Time + 5;
			}
		}

		Tower[Curr_floor][0] = -1;

		while (Flor_cpy > 0)
		{
			Time = Time + 10;
			Flor_cpy--;
		}
}

void Full_return(int ** Tower, const int & floors, const int & slots, int & Time)
{
	int No_of_cars = Count_Cars(Tower, floors, slots);
	int iter = 1;

	while (iter <= No_of_cars)
	{
		for (int i = 0; i < floors; i++)//searching on floors
		{
			for (int j = 0; j < slots; j++)//searching for slot on [i] floor
			{
				if (Tower[i][j] == iter)
				{
					Return_car(Tower, i, slots, j, Time);
					if (i > 0) { Time =Time + (i* 10); }
					iter++;
					break;
				}
			}
		}
	}
}

int main()
{
	//Variables
	int floors, slots,cases,Time=0,Cars,i=0;
	int ** Tower;
	
	cin >> cases;
	while (i < cases)
	{
		Time = 0;
		cin >> floors >> slots;

		Tower = new int *[floors];
		for (int i = 0; i < floors; i++)
		{
			Tower[i] = new int[slots];
		}

		Fill_floors(Tower, floors, slots);

		Full_return(Tower, floors, slots, Time);
		cout << Time << endl;

		i++;
	}
	return 0;
}


//Rotate_Left(Tower, 0, slots);
//View_Tower(Tower, floors, slots);
//Rotate_Right(Tower, 0, slots);
//View_Tower(Tower, floors, slots);
//	Cars = Count_Cars(Tower, floors, slots);

//	Return_car(Tower, 0, slots, 2, Time);
//	View_Tower(Tower, floors, slots,Time);
//View_Tower(Tower, floors, slots, Time);
//View_Tower(Tower, floors, slots, Time);