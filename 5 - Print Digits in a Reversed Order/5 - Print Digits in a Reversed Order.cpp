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



void PrintDigit(int N)
{

	int Remainder = 0;

	cout << endl;

	while (N > 0)
	{
		Remainder = N % 10;
		N /= 10;

		cout << Remainder << endl;
	}

}





int main()
{
	PrintDigit(Read_Num("Please Enter A Number : "));


	system("color 3F");
	system("pause>0");
	return 0;
}
