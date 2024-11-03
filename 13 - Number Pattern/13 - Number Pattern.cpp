#include <iostream>
using namespace std;


int Read_Number(string Msg) {
	int N = 0;

	do
	{
		cout << Msg << endl;
		cin >> N;

	} while (N <= 0);

	return N;
}


void Print_NumberPattern(int N) {

	cout << "\n";

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}


int main()
{  
	int N = Read_Number("Please Enter A Positive Number Mr.Taha : ");
	Print_NumberPattern(N);

	system("color 4F");
	system("pause>0");
    return 0;
}
