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



void Add_Number_In_Array(int arr[100], int& length, int N) {
	length++;

	arr[length] = N;
}



void Input_User_Array(int arr[100], int &length) {

	bool AddMore = true;

	do
	{
		Add_Number_In_Array(arr, length, Read_Number("Please Enter A Number ?"));

		cout << "Do U Want To Add More Numbers ? [0]:No , [1]:Yes  \n";
		cin >> AddMore;

	} while (AddMore == true);
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

	int arr[100], length = 0;

	Input_User_Array(arr, length);
	
	cout << "\nArray Length : " << length << endl;
	cout << "Array Elements : "; 
	Print_Array(arr, length) ;
	

	system("pause>0");
    return 0;
}
