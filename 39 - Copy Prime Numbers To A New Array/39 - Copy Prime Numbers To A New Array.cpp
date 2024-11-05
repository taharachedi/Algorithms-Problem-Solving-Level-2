#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum enPrimeNotPrime{Prime = 1, Not_Prime = 2};

enPrimeNotPrime CheckPrime(int N) {

    int M = round(N / 2);

    for (int i = 2; i <= M; i++)
    {
        if (N % i == 0)
            return enPrimeNotPrime::Not_Prime;
    }
    return enPrimeNotPrime::Prime;
}

int Random_Number(int From, int To) {
    return rand() % (To - From + 1) + From;
}


void Fill_Array(int arr[100], int& length) {
    cout << "Please Enter The Array Length : ";
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


void Add_Number_In_Array(int arr[100], int& length, int N) {
    length++;

    arr[length] = N;
}


void Copy_PrimeNumber_In_Array(int arr[100], int arr1[100], int length, int& length1) {

    
    for (int i = 1; i <= length; i++)
    {
        if (CheckPrime(arr[i]) == enPrimeNotPrime::Prime) {
            Add_Number_In_Array(arr1, length1, arr[i]);
        }
    }
}


int main()
{
    system("color 3F");
    srand((unsigned)time(NULL));

    int arr[100], length = 0;

    Fill_Array(arr, length);
    
    int arr1[100], length1 = 0;

    Copy_PrimeNumber_In_Array(arr, arr1, length, length1);

    cout << "Array Elements : ";
    Print_Array(arr, length);


    cout << "Array Elements (Prime Numbers) : ";
    Print_Array(arr1, length1);


    system("pause>0");
    return 0;
}
