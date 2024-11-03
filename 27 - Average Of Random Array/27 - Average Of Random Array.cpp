#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int Random_Number(int From, int To) {
    return rand() % (To - From + 1) + From;
}


void Fill_Array(int arr[100], int &length) {

    cout << "Please Enter The Array Length : \n";
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        arr[i] = Random_Number(1, 100);
    }
}


void Print_Array(int arr[100], int length) {

    for (int i = 1; i <= length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int Sum_Array(int arr[100], int length) {
    int Sum = 0;

    for (int i = 1; i <= length; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}


float Average_Array(int arr[100], int length) {
    return (float)Sum_Array(arr, length) / length;
}





int main()
{
    system("color 6F");
    srand((unsigned)time(NULL));

    int arr[100], length;

    Fill_Array(arr, length);

    cout << "Array Elements : ";
    Print_Array(arr, length);

    cout << "Average Of All Number is : " << Average_Array(arr, length) << endl;


    system("pause>0");
    return 0;
}
