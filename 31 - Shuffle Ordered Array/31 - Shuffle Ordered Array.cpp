#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int Random_Number(int From, int To) {
    return rand() % (To - From + 1) + From;
}


void Swap(int& A, int& B) {
    int temp;

    temp = A;
    A = B;
    B = temp;
}



void Fill_Array(int arr[100], int& length) {

    cout << "Please Enter The Array Length : \n";
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        arr[i] = i;
    }
}


void Print_Array(int arr[100], int length) {

    for (int i = 1; i <= length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



void Shuffle_Array(int arr[100], int length) {

    for (int i = 1; i <= length; i++)
    {
        Swap(arr[Random_Number(1, length) ], arr[Random_Number(1, length)]);
    }
}





int main()
{
    system("color 6F");
    srand((unsigned)time(NULL));

    int arr[100], length;

    Fill_Array(arr, length);
    cout << "Array Elements before Shuffle : \n";
    Print_Array(arr, length);

    Shuffle_Array(arr, length);
    cout << "Array Elements After Shuffle : \n";
    Print_Array(arr, length);

    system("pause>0");
    return 0;
}
