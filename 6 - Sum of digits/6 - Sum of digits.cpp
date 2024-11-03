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



int Print_Sum_Digits(int N)
{
	int Remainder = 0;
	int Sum = 0;

	while (N > 0)
	{
		Remainder = N % 10;
		N /= 10;

		Sum += Remainder;
	}

	return Sum;
}





int main()
{
	cout << "\nSum Of Digits = " << Print_Sum_Digits(Read_Num("Please Enter A Number : ")) << endl;


	system("color 3F");
	system("pause>0");

    return 0;
}
