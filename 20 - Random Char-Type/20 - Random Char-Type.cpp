#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


enum enCharType { Special_Character = 1, Digit = 2, Capital_Letter = 3, Small_Letter = 4 };



int Read_Random(int From, int To) {
	return rand() % (To - From + 1) + From;
}


char Get_RandomCharacter(enCharType CharType) {

	switch (CharType)
	{
	case enCharType::Special_Character:
		return char(Read_Random(33, 47));

	case enCharType::Digit:
		return char(Read_Random(48, 57));

	case enCharType::Capital_Letter:
		return char(Read_Random(65, 90));

	case enCharType::Small_Letter:
		return char(Read_Random(97, 122));

	}
}


int main()
{
	srand((unsigned)time(NULL));
	
	cout << Get_RandomCharacter(enCharType::Special_Character) << endl;
	cout << Get_RandomCharacter(enCharType::Digit) << endl;
	cout << Get_RandomCharacter(enCharType::Capital_Letter) << endl;
	cout << Get_RandomCharacter(enCharType::Small_Letter) << endl;


	system("color 3F");
	system("pause>0");
	return 0;
}
