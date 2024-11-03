#include <iostream>
using namespace std;


int Read_Num(string Msg)
{
    int N = 0;

	do
	{
		cout << Msg << endl;
		cin >> N;

	} while (N <= 0);

	return N;
}


int Count_Digit_Frequency(int N, short DigitToCheck)
{
	int Remainder = 0;
	int Frequency = 0;

	while (N > 0)
	{
		Remainder = N % 10;
		N = N / 10;

		if (Remainder == DigitToCheck)
			Frequency++;
	}

	return Frequency;
}



int main()
{
	int Number = Read_Num("Please Enter The Main Number : ");
	short Digit_To_Check = Read_Num("Please Enter The Digit To Check : ");

	cout << "\nDigit  " << Digit_To_Check << " Frequency is  "  << Count_Digit_Frequency(Number, Digit_To_Check) << " Time(s).";
	cout << endl;


	system("color 3F");
	system("pause>0");
    return 0;
}
