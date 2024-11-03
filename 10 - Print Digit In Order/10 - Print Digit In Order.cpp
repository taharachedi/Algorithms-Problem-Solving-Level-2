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



int Reverse_Num(int N)
{
	int Remainder = 0;
	int NewNumber = 0;

	while (N > 0 )
	{
		Remainder = N % 10;
		N = N / 10;

		NewNumber = NewNumber * 10 + Remainder;
	}

	return NewNumber;
}



void Print_Digit(int N)
{
	int Remainder = 0;

	cout << endl;

	while (N > 0)
	{
		Remainder = N % 10;
		N = N / 10;

		cout << Remainder << endl;
	}
}




int main()
{
	Print_Digit( Reverse_Num( Read_Num("Please Enter The Main Number : ")));


	system("color 3F");
	system("pause>0");
    return 0;
}
