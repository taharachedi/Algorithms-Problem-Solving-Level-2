#include <iostream>

using namespace std;



void Fill_Array(int arr[100], int& length) {

	length = 10;

	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 50;
	arr[5] = 50;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 70;
	arr[10] = 90;

}



void Print_Array(int arr[100], int length) {
	for (int i = 1; i <= length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void Add_Numbers_In_Array(int arr[100], int& length,int N) {
	length++;

	arr[length] = N;
}


int Find_Number_Position_In_Array(int arr[100], int length, int N) {
	for (int i = 1; i <= length; i++)
	{
		if (arr[i] == N)
			return i;
	}
	return -1;
}

bool isNumber_In_Array(int arr[100], int length, int N) {
	return Find_Number_Position_In_Array(arr, length, N) != -1;
}




void Copy_Distinct_Numbers_To_Array(int arr[100], int arr1[100], int length, int& length1) {

	for (int i = 1; i <= length; i++)
	{
		if ( !isNumber_In_Array(arr1,length1,arr[i]) )
			Add_Numbers_In_Array(arr1, length1, arr[i]);

	}
}




int main()
{
	system("color 6F");

	int arr[100], length = 0;
	Fill_Array(arr, length);

	int arr1[100], length1 = 0;
	Copy_Distinct_Numbers_To_Array(arr, arr1, length, length1);

	cout << "Array1 Elements : ";
	Print_Array(arr, length);

	cout << "Array2 Distinct Elements : ";
	Print_Array(arr1, length1);


	system("pause>>0");
    return 0;
}
