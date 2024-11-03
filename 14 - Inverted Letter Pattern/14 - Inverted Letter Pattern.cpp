#include <iostream>
#include <string>
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


void Print_InvertedLetterPattern(int N) {
	cout << "\n";

	for (int i = 65 + N -1; i >= 65; i--)
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
	int N = Read_Number("Please Enter A Positive Number Mr.Taha : ");
	Print_InvertedLetterPattern(N);


	system("color 3F");
	system("pause>0");
    return 0;
}
