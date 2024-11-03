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
	int New_Number = 0;

	while (N > 0)
	{
		Remainder = N % 10;
		N = N / 10;

		New_Number = New_Number * 10 + Remainder;
	}

	return New_Number;
}






int main()
{
	cout << "\nReverse is = " << Reverse_Num(Read_Num("Please Enter A Number :")) << endl;


	system("color 3F");
	system("pause>0");
    return 0;
}
