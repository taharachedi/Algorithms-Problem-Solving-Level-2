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



int Count_Digit_Frequency(int N , short Digit_To_Check)
{
	int Remainder = 0;
	short Count_Frequency = 0;

	while (N > 0)
	{
		Remainder = N % 10;
		N = N / 10;

		if (Remainder == Digit_To_Check)
			Count_Frequency++;
	}
	return Count_Frequency;
}


void Print_All_Digit_Frequency(int N)
{

	for (short i = 0; i < 10; i++)
	{
		short Digit_Frequency = 0;
		Digit_Frequency = Count_Digit_Frequency(N, i);

		if (Digit_Frequency > 0)
			cout << "Digit " << i << " Frequency is " << Digit_Frequency << " Time(s)." << endl;
	}
}



int main()
{
	int Number = Read_Num("Please Enter The Main Number :");

	Print_All_Digit_Frequency(Number);

	system("color 3F");
	system("pause>0");
    return 0;
}
