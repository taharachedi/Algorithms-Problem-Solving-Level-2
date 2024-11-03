#include <iostream>
#include <string>
using namespace std;


string Read_Letter() {

	string Password;

	do
	{
		cout << "Please Enter A 3-Letter Password (All Capital) : \n";
		cin >> Password;

	} while (Password.length() != 3);

	return Password;
}


bool GuessLetterPassword(string Password) {

	string Word = "";
	int Counter = 0;

	cout << "\n";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Counter++;

				Word += char(i);
				Word += char(j);
				Word += char(k);

				cout << "Trial [ " << Counter << " ] : " << Word << endl;
				

				if (Word == Password)
				{
					cout << "\n--------------------------------------------------\n";
					cout << "\nPassword is : " << Password << endl;
					cout << "Found After " << Counter << " Trial(s).";

					return true;
				}

				Word = "";
			}
		}
	}
	return false;
}


int main()
{
	system("color 6F");

	GuessLetterPassword(Read_Letter());
	
	system("pause>0");
    return 0;
}
