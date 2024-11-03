#include <iostream>
#include <cstdlib>
#include <string>

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



int Random_Number(int From, int To) {
    return rand() % (To - From + 1) + From;
}



void Fill_Array(int arr[100], int length) {
      
    /*    cout << "Please Enter The Array Length : \n";
    cin >> length; */

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



void Sum_Array(int arr1[100], int arr2[100], int sum[100], int length) {

    for (int i = 1; i <= length; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
    cout << endl;
}




int main()
{
    system("color 3F");
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], sum[100];
    int length = Read_Number("How Many Elements ? ");

    Fill_Array(arr1, length);
    Fill_Array(arr2, length);
    Sum_Array(arr1, arr2, sum, length);

    cout << "Array1 Elements : ";
    Print_Array(arr1, length);
    
    cout << "Array2 Elements : ";
    Print_Array(arr2, length);

   
    cout << "Sum Of 2 Arrays To A Third One : ";
    Print_Array(sum, length);


    system("pause>0");
    return 0;
}
