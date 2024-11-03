#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum enCkeckPrime {Prime = 1 , NotPrime = 2};

enCkeckPrime isPrime(int N) {
    int M = round(N / 2);

    for (int i = 2; i <= M; i++)
    {
        if (N % i == 0)
            return enCkeckPrime::NotPrime;
    }
    return enCkeckPrime::Prime;
}



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
    cout << endl;
}


void Copy_OnlyPrime_Array(int arr1[100], int arr[100], int length,int &length1) {
    int Counter = 1;

    for (int i = 1; i <= length; i++)
    {
        if (isPrime(arr[i]) == enCkeckPrime::Prime) {
            arr1[Counter] = arr[i];
            Counter++;
        }
      
    }
    length1 = --Counter;
}


int main()
{
    srand((unsigned)time(NULL));
    system("color 6F");

    int arr[100], length = 0;

    Fill_Array(arr, length);
    cout << "\nArray Elements       : ";
    Print_Array(arr, length);


    int arr1[100] ,length1 = 0 ;

    Copy_OnlyPrime_Array(arr1, arr, length,length1);
    cout << "Prime Array Elements : ";
    Print_Array(arr1, length1);


    system("pause>0");
    return 0;
}
