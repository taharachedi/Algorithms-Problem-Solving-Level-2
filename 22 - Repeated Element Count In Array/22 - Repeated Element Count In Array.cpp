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


void Read_ArrayElement(int Element[100] , int& Length) {

	cout << "Please Enter Array Length : \n";
	cin >> Length;

	cout << "Enter Array Element : \n";

	for (int i = 1; i <= Length; i++)
	{
		cout << "Element [" << i << "] :";
		cin >> Element[i];
	}
	cout << endl;
}

void Print_ArrayElement(int Element[100], int length) {

	for (int i = 1; i <= length; i++)
	{
		cout << Element[i] << " " ;
	}
	cout << endl;
}


int Time_Repeated(int NumberToCheck, int array[100], int length) {
	int Count = 0;

	for (int i = 1; i <= length; i++)
	{
		if (array[i] == NumberToCheck)
			Count++;
	}
	return Count;
}


int main()
{
	int array[100], Length, NumberToCheck;

	Read_ArrayElement(array, Length);

	NumberToCheck = Read_Number("\nEnter The Number U Want To Check :");

	cout << "\nOriginal array :";
	Print_ArrayElement(array, Length);

	cout << endl << NumberToCheck << " is repeated " << Time_Repeated(NumberToCheck, array, Length) << " Time(s) " << endl;

    return 0;
}
