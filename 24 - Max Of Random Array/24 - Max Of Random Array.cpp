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


int Max_Array(int arr[100], int length) {

    int Max = 0;

    for (int i = 1; i <= length; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
    }
    return Max;
}




int main()
{
    system("color 3F");

    srand((unsigned)time(NULL));

    int arr[100], length;
   
    Fill_Array(arr, length);

    cout << "Array Element : ";
    Print_Array(arr, length);

    cout << "\nMax Number is : ";
    cout << Max_Array(arr, length);


    system("pause>0");
    return 0;
}
