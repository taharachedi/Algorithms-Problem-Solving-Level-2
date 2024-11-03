#include <iostream>
using namespace std;


int Read_Number(string Msg)
{
    int Num;

	do
	{
		cout << Msg << endl;
		cin >> Num;

	} while (Num < 0);

	return Num;
}


bool isPerfect(int Num)
{
	int Sum = 0;
	int M = round(Num / 2);

	for (int i = 1; i <= M; i++)
	{
		if (Num % i == 0)
			Sum += i;
	}

	return (Num == Sum);
}


void PrintResult(int Num)
{
	if (isPerfect(Num))
		cout << Num << " is Perfect! " << endl;
	else
		cout << Num << " is Not Perfect! " << endl;
}




int main()
{
	PrintResult(Read_Number("Please Enter The Number : "));


	system("color 3F");
	system("pause>0");
    return 0;
}
