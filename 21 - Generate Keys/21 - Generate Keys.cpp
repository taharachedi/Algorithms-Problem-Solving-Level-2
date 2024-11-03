#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum enCharType { Speciall_Character =1, Digit = 2, Capital_Letter = 3, Small_Letter = 4};

int Random_Number(int From, int To) {
    return rand() % (To - From + 1) + From;
}


char Get_Random_Character(enCharType CharType) {

	switch (CharType)
	{
	case enCharType::Speciall_Character:
		return char(Random_Number(33, 47));
	case enCharType::Digit:
		return char(Random_Number(48, 57));
	case enCharType::Capital_Letter:
		return char(Random_Number(65, 90));
	case enCharType::Small_Letter:
		return char(Random_Number(97, 122));

	}
}


int Read_Number(string Msg) {
	int N = 0;

	do
	{
		cout << Msg << endl;
		cin >> N;

	} while (N <= 0);

	return N;
}


string Get_4_Characters(enCharType CharType, short length) {
	string Word = "";

	for (int i = 0; i < length; i++)
	{
		Word = Word + Get_Random_Character(CharType);
	}

	return Word;
}



string GenerateKey() {
	string Key = "";

	Key = Key + Get_4_Characters(enCharType::Capital_Letter, 4) + "-";
	Key = Key + Get_4_Characters(enCharType::Capital_Letter, 4) + "-";
	Key = Key + Get_4_Characters(enCharType::Capital_Letter, 4) + "-";
	Key = Key + Get_4_Characters(enCharType::Capital_Letter, 4) ;

	return Key;
}


void GenerateKeys(short NumberOfKeys) {

	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : " << GenerateKey() << endl;
	}
}




int main()
{
	system("color 2F");
	srand((unsigned)time(NULL));

	GenerateKeys(Read_Number("How Many Keys To Generate ?"));

	system("pause>0");
    return 0;
}
