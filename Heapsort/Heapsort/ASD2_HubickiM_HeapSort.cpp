#include <iostream>
#include <algorithm>

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


void Heap(int * tab, int capacity)
{
	int iter = 2;
	int tmp = iter;
	while (iter <= capacity)
	{
		tmp = iter;
		while (tab[tmp]>tab[tmp / 2] && tmp != 1)
		{

			swap(tab[tmp], tab[tmp / 2]);
			view(tab, capacity);
			tmp = tmp / 2;

		}
		iter++;
	}
}

void Heap_sort(int * tab, int capacity)
{
	int i = 1, j = 1, tmp, tmp2;
	int iter = capacity;

	while (capacity > 1)
	{

		swap(tab[iter], tab[1]);
		capacity--;

		tmp = j * 2;
		tmp2 = (j * 2) + 1;

		while (tmp <= capacity && tmp2 <= capacity)// do poprawy 
		{
			tmp = j * 2;
			tmp2 = (j * 2) + 1;

			if (tab[tmp] > tab[tmp2])
			{
				swap(tab[j], tab[tmp]);

			}
			else
			{
				swap(tab[j], tab[tmp2]);

			}
			j++;
		}
		view(tab, capacity);
	}
	//	view(tab, capacity);
}



int main()
{

	int capacity, i = 1;
	cin >> capacity;

	int * Tab = new int[capacity + 1];

	while (i < (capacity + 1))
	{
		cin >> Tab[i];
		i++;
	}

	i = 1;
	/*while (i < (capacity + 1))
	{
		cout << Tab[i] << " ";
		i++;
	}
	cout << std::endl;*/
	view(Tab, capacity);
	Heap(Tab, capacity);

	//i = 1;
	//while (i < (capacity + 1))
	//{
	//	cout << Tab[i] << " ";
	//	i++;
	//}
	//cout << std::endl;

	Heap_sort(Tab, capacity);

		system("pause");
	return 0;
}