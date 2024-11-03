#include <iostream>
#include <string>
using namespace std;


int Read_Num(string Msg) {
    int N = 0;

	do
	{
		cout << Msg << endl;
		cin >> N;

	} while (N <= 0);

	return N;
}

void Print_LetterPattern(int N) {

	cout << "\n";

	for (int i = 65; i <= 65 + N -1; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(i);
		}

		cout << "\n";
	}
}


int main()
{
	int N = Read_Num("Please Enter A Positive Number :");
	Print_LetterPattern(N);

	system("color 6F");
	system("pause>0");
    return 0;
}
