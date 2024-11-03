#include <iostream>
using namespace std;


int Read_Num(string Msg)
{
    int Num;

	do
	{
		cout << Msg << endl;
		cin >> Num;

	} while (Num <= 0);

	return Num;
}



bool isPerfect(int N)
{
	int Sum = 0;
	int M = round(N / 2);

	for (int i = 1; i <= M; i++) 
	{
		if (N % i == 0)
			Sum += i;

	}
	return (Sum == N);
}




void Print_All_Perfect(int N)
{
	cout << "\n\nThe Perfect Numbers From " << 1 << " To " << N << " : \n";

	for (int i = 1; i <= N; i++)
	{
		if (isPerfect(i)) 
			cout << i << endl;
	}
}




int main()
{
	Print_All_Perfect(Read_Num("Please Enter The Last Number N : "));


	system("color 3F");
	system("pause>0");
    return 0;
}
