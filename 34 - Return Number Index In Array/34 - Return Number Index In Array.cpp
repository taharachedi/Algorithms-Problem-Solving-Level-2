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


int Position_Array(int arr[100], int length ,int N) {

    for (int i = 1; i <= length; i++)
    {
        if (arr[i] == N)
            return i; 
    }

    return -1;
}




int main()
{
    system("color 3F");
    srand((unsigned)time(NULL));

    int arr[100], length;

    Fill_Array(arr, length);
    cout << "Array1 Elements : \n";
    Print_Array(arr, length);


    int N = Read_Number("Please Enter A Number To Search For ?");
    cout << "\nThe Number U are Looking for is : " << N << endl;


    short Position = Position_Array(arr, length, N);

    if (Position == -1) {

        system("color 4F");

        cout << "The Number is Not Found !!!! " << endl;
    }
    else
    {
        system("color 2F");

        cout << "The Number Found at Position : " << Position - 1 << endl;
        cout << "The Number Found its Order : " << Position << endl;
    }
  

    system("pause>0");
    return 0;
}
