#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;


int Random_Num(int From, int To) {
    return rand() % (To - From + 1) + From;
}


void Fill_Array(int arr[100], int& length) {

    cout << "Please Enter Array Length : \n";
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        arr[i] = Random_Num(1, 100);
    }
}



void Print_Array(int arr[100], int length) {

    for (int i = 1; i <= length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int Min_Array(int arr[100], int length) {

    int Min = arr[1];

    for (int i = 1; i <= length; i++)
    {
        if (arr[i] < Min)
            Min = arr[i];
    }

    return Min;
}




int main()
{
    system("color 3F");
    srand((unsigned)time(NULL));

    int arr[100], length;

    Fill_Array(arr, length);

    cout << "\nArray Elements : ";
    Print_Array(arr, length);

    cout << "\nMin Number is : " << Min_Array(arr, length) << endl;
    

    system("pause>0");
    return 0;
}
