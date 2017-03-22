#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void Heap( int  Tab[5], int i, int n)
{

		int left, right, largest;
		int tmp;

		left = 2 * i;
		right = (2 * i) + 1;

		if (left <= n && Tab[left] > Tab[i])
		{
			largest = left;
		}
		else
		{
			largest = i;
		}

		if (right <= n && Tab[right] > Tab[largest])
		{
			largest = right;
		}

		if (largest != i)
		{
			tmp = Tab[i];
			Tab[i] = Tab[largest];
			Tab[largest] = tmp;
			Heap(Tab, largest, n);
		}

		
	}

int main()
{

	int Cases,n;


	cin >> n;
	int tab[5];
	//int * tab=new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}

	Heap( tab, (n / 2), n);

	system("pause");
	return 0;
}