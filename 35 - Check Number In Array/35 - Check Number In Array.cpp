#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int Read_Num(string Msg) {
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



int Find_Number_Position_In_Array(int arr[100], int length,int N) {

    for (int i = 1; i <= length; i++)
    {
        if (arr[i] == N)
            return i;
    }
    return -1;
}


bool isNumber_In_Array(int arr[100], int length, int N) {

    return Find_Number_Position_In_Array(arr, length, N) != -1;
}

int main()
{
    system("color 3F");
    srand((unsigned)time(NULL));

    int arr[100], length;


    Fill_Array(arr, length);
    cout << "Array 1 Elements : \n";
    Print_Array(arr, length);


    int N = Read_Num("Please Enter A Number To Search For  ");

    cout << "\nNumber U are Looking For is : " << N << endl;

    if (!isNumber_In_Array(arr, length, N)) {
        system("color 4F");
        cout << "No , The Number is Not Found " << endl;
    }
        
    
    else {
        system("color 2F");
        cout << "Yes , The Number is Found " << endl;
    }
        

    system("pause>0");
    return 0;
}
