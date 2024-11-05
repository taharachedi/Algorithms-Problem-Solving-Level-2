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



void Add_Number_In_Array(int arr[100], int& length , int N) {
    length++;
    
    arr[length] = N;
}


void Copy_Array_Using(int arr[100], int arr1[100], int length, int& length1) {

    for (int i = 1; i <= length ; i++)
    {
        Add_Number_In_Array(arr1, length1, arr[i]);
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

    int arr[100],length = 0;

    Fill_Array(arr, length);

    int arr1[100], length1 = 0;

    Copy_Array_Using(arr, arr1, length, length1);


    cout << "Array 1 Elements : ";
    Print_Array(arr, length);


    cout << "Array 2 Elements After Copy : ";
    Print_Array(arr1, length1);


    system("pause>0");
    return 0;
}
