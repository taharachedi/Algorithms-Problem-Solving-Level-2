#include <iostream>
#include <cstdlib>

using namespace std;

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


int Count_Even_Numbers_In_Array(int arr[100], int length) {
    int Count = 0;

    for (int i = 1; i <= length; i++)
    {
        if (arr[i] % 2 == 0)
            Count++;
    }
    return Count;
}



int main()
{
    system("color 6F");
    srand((unsigned)time(NULL));

    int arr[100], length = 0;

    Fill_Array(arr, length);

    cout << "\nArray Elements : ";
    Print_Array(arr, length);

    cout << "\nEven Numbers Count is : " << Count_Even_Numbers_In_Array(arr, length) << endl;

    system("pause>0");
    return 0;
}
