#include <iostream>
using namespace std;

enum enPrimeNotPrime {Prime = 1 , NotPrime = 2};

int Read_N(string Msg)
{
	int N = 0;
	do
	{
		cout << Msg << endl;
		cin >> N;

	} while (N < 0);

	return N;
}


enPrimeNotPrime CheckPrime(int Num)
{
    int M = round(Num / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}


void PrintPrime(int N)
{
	cout << "\nThe Prime Number From 1 To " << N << " : \n";

	for (int i = 1; i <= N; i++)
	{
		if (CheckPrime(i)==enPrimeNotPrime::Prime) 
			cout << i << endl;
	}
}




int main()
{
	PrintPrime(Read_N("Please Enter The Last Number N : "));


	system("color 6F");
	system("pause>0");
    return 0;
}
