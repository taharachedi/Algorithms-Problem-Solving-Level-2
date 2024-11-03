#include <iostream>
#include <string>

using namespace std;

/* 
void Print_AllWords() {
	for (int i = 65; i <= 90; i++)
	{
		for(int j=65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				cout << char(i) << char(j) << char(k) << endl;
			}
		}
	}
}
*/

void Print_AllWords() {

	string Word = " ";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Word += char(i);
				Word += char(j);
				Word += char(k);

				cout << Word << endl;

				Word = " ";
			}
		}
		cout << "-----------------------------------------------------\n";
	}
}



int main()
{
	system("color 6F"); 

	Print_AllWords();


	system("pause>0");
    return 0;
}
