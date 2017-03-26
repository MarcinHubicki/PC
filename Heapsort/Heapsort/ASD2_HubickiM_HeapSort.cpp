/*******************************************************************************
							PROJECT HEAP SORT
Started on 21.03.2017
Last Update version 1.3 on : 25.03.2017
What is new:
- Many cases are possible now
- Fixed Heap_sort Function

To do:
- Need to change printing so it matches the task

Made by Marcin Hubicki
*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <time.h>

using std::cin;
using std::cout;
using std::swap;

void view(int *Tab, int capacity)
{
	int i = 1;
	while (i < capacity+1 )
	{
		cout << Tab[i] << " ";
		i++;
	}
	cout << std::endl;
}

void Get_Rands(int amount, int range, int * Tab)
{
	srand((unsigned)time(0));
	
	for (int i = 1; i <= amount; i++)
	{
		Tab[i] = rand() % (range + 1);// + (- (range/2));
	}

}


void Heap(int * tab, int capacity)
{
	capacity -= 1;
	int iter = 2;
	int tmp = iter;
	while (iter <= capacity)
	{
		tmp = iter;

		while (tab[tmp]>tab[tmp / 2] && tmp != 1)
		{

			swap(tab[tmp], tab[tmp / 2]);
			tmp = tmp / 2;
		}
		iter++;
	}
}

void Heap_sort(int * tab, int capacity)
{
	capacity -= 1;
	int cpy_cap = capacity;

	int i = 1, j = 1, tmp, tmp2;
	int iter = capacity;


	while (capacity > 1)
	{
		j = 1;
		swap(tab[iter], tab[1]);
		capacity--;

		tmp = j * 2;
		tmp2 = (j * 2) + 1;

		while (tmp <= capacity || tmp2 <= capacity)// do sprawdzenia bo zle '^'
		{

			tmp = j * 2;
			if ( tmp >= capacity)// tu moze byc blad
			{
				if (tmp > capacity)
				{
					break;
				}
				if (tmp == capacity)
				{
					if (tab[capacity] > tab[j])
					{
						swap(tab[capacity], tab[j]);
						break;
					}
					else
					{
						break;
					}

				}
				//if (tab[j] < tab[capacity])
				//{
				//	//swap(tab[j], tab[capacity]);
				//	break;
				//}
				//else
				//{
				//	break;
				//}
			}
			tmp2 = (j * 2) + 1;

			if (tab[tmp] > tab[tmp2])
			{
				swap(tab[j], tab[tmp]);
				j = tmp;
			}
			else
			{
				swap(tab[j], tab[tmp2]);
				j = tmp2;
			}
			//j++;
		}
		iter--;
		view(tab, capacity);
	}
	view(tab, cpy_cap);
}

void Heap_sort2(int * tab, int capacity)
{
	capacity -= 1;
	int cpy_cap = capacity;

	int i = 1, j = 1, tmp, tmp2;
	int iter = capacity;


	while (capacity > 1)
	{
		j = 1;
		swap(tab[iter], tab[1]);
		capacity--;
		Heap(tab, capacity);
		view(tab, capacity);
		iter--;

	}
	//view(tab, cpy_cap);
}



int main()
{

	int cases;
	cin >> cases;

	for (int k = 0; k < cases; k++)
	{

		int capacity, i = 1;
		cin >> capacity;
		capacity += 1;

		int * Tab = new int[capacity];

		Get_Rands(capacity-1, 10000, Tab);
		//while (i < capacity)
		//{
		//	cin >> Tab[i];
		//	i++;
		//}

		view(Tab, capacity - 1);
		cout << std::endl;

		Heap(Tab, capacity);
		view(Tab, capacity - 1);

		cout << std::endl;
		Heap_sort(Tab, capacity);
	//	view(Tab, capacity - 1);

		cout << std::endl;
		delete [] Tab;
	}

	return 0;
}