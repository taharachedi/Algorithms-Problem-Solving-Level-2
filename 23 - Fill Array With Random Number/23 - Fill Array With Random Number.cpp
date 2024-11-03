#include <iostream>
#include <cstdlib>

using namespace std;


int Random_Num(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void Fill_Array(int arr[100], int& length) {

	cout << "Please Enter Array Length : \n";
	cin >> length;

	for (int i = 1; i <= length; i++)
	{
		arr[i] = Random_Num(1, 100);
	}
}


void Print_Array(int arr[100], int length) {

	for (int i = 1; i <= length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	system("color 6F");

	srand((unsigned)time(NULL));

	int arr[100], Length;
	Fill_Array(arr, Length);

	cout << "\nArray Element : ";
	Print_Array(arr, Length);


	system("pause>0");
	return 0;
}
