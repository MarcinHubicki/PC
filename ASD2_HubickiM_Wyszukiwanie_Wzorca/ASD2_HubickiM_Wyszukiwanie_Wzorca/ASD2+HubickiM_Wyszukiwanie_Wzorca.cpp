#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

#define d  256

long long Pattern_count(const string & pattern)
{
	long long i = 1, Sum=0;
	Sum = (long long)pattern[0];
	
	while (i < pattern.size())
	{
		Sum *= d;

		Sum = Sum % d;

		Sum += (long long)pattern[i];

		i++;
		
	}
	return Sum;
}

void Search(const string & text,const string & pattern, const long long & pattern_No)
{
	long long Text_No = 0;
	long long j = 0;
	long long pot = 1;
	int i = 1;
	char * tmpS;

	Text_No = (long long)text[0];

	while (i < pattern.size())
	{
		Text_No *= d;

		Text_No = Text_No % d;

		Text_No += (long long)text[i];
		i++;
	}

	i = pattern.size();


	int s = 0;

	for (int k = 0; k < (pattern.size() - 1); k++)
	{
		pot = pot * d;
	}


	while (i < text.size())
	{
		if (Text_No == pattern_No)
		{
			s = 0;
			while (s < pattern.size())
			{
				if (pattern[s] == text[s+j])
				{
					if (s == pattern.size() - 1)
					{
						cout<< j<<"	" ;
					}
				}
				else
				{
					break;
				}
				s++;
			}

		}

		Text_No -= text[j] * pot;

		Text_No = Text_No * d;

		Text_No = Text_No % d;

		Text_No = Text_No + (long long)text[i];
	

		i++;
		j++;
	}

}


int main()
{
	long cases;
	long long pattern_No;
	string File_Name;
	string tmp1,pattern,text;
	


	//amount of cases
	cin >> cases;
	

	for (int i = 0; i < cases; i++)
	{

		cin >> File_Name;
		cin.ignore();

		std::ifstream in(File_Name);
		std::getline(in, text);


		std::getline(cin, pattern);

		pattern_No = Pattern_count(pattern);
		

		Search(text, pattern, pattern_No);
		cout<<endl;
		
	}

	
	return 0;
}
