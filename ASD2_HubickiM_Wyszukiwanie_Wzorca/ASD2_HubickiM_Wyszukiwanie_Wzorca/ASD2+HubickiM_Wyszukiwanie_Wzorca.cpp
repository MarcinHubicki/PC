#include <iostream>
#include <string>
#include <math.h>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void przesun(char s[4])
{
	for (int i = 1; i < 4 ;i++)
	{
		s[i - 1] = s[i];
	}

}


short Wyznacz_Liczbe( char s[4])
{
	int i = 0, j = 0;
	short wyn = 0;
	short  wart[5];
	wart[0] = 0;

	while (i<4)
	{
		switch (s[i])
		{
		case 'A':
			wart[i + 1] = 1;
			break;
		case 'C':
			wart[i + 1] = 2;
			break;
		case 'G':
			wart[i + 1] = 3;
			break;
		case 'T':
			wart[i + 1] = 4;
			break;
		}
		i++;
	}
	for (i = 4; i > 0; i--)
	{
		wyn += wart[i] * pow(10, j);
		j++;
	}

	cout << "wyn dla " <<s[0]<< s[1] << s[2] << s[3] <<": " << wyn<<endl;
	return wyn;
}


int main()
{
	char * wzorzec = "ACGT";
	short size = sizeof wzorzec;
	char c;
	char text[4];
	int i, hits=0;

	short wyn = Wyznacz_Liczbe(wzorzec),tmpS;
	i = 0;

	while (i < 4)
	{
		cin >> c;
		text[i] = c;
		i++;
	}
	i = 0;
	while(hits<19)
	{
		tmpS=Wyznacz_Liczbe(text);
		if (tmpS == wyn) { hits++; cout << "HIT!" << endl; }
		przesun(text);
		cin >> c;
		text[3] = c;
		i++;
	}
	cout << "HITS:" << hits << endl;
	

//	system("pause");
	return 0;
}