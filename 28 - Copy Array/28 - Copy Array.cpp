#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int Random_Number(int From, int To) {
    return rand() % (To - From + 1) + From;
}

void Fill_Array(int arr[100], int& length) {

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

}


void Copy_Array(int arr1[100], int arr[100],  int length) {

    for (int i = 1; i <= length; i++)
    {
        arr1[i] = arr[i];
    }
}


int main()
{
    system("color 6F");
    srand((unsigned)time(NULL));

    int arr[100], length;

    Fill_Array(arr, length);
    cout << "\nArray Elements  : ";
    Print_Array(arr, length);

    int arr1[100];

    Copy_Array(arr1, arr, length);
    cout << "\nArray1 Elements : ";
    Print_Array(arr1, length);

    system("pause>0");
    return 0;
}
