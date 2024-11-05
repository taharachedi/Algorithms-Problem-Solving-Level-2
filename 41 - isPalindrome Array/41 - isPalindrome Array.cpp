#include <iostream>

using namespace std;


void Fill_Array(int arr[100], int& length) {

    length = 6;

    arr[1] = 10;
    arr[2] = 20;
    arr[3] = 30;
    arr[4] = 30;
    arr[5] = 20;
    arr[6] = 10;
}


void Print_Array(int arr[100], int length) {

    for (int i = 1; i <= length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}




bool isPalindrome_Array(int arr[100], int length) {

    for (int i = 1; i <= length; i++)
    {
        if (arr[i] != arr[length - i + 1])
            return false;
    }
    return true;
}




int main()
{
    system("color 3F");
    int arr[100],length = 0;

    Fill_Array(arr, length);
    cout << "Array Elements : ";
    Print_Array(arr, length);

    if (isPalindrome_Array(arr, length)) {
        system("color 2F");
        cout << "\nYes , Array is Palindrome \n";
    }
        
    else {
        system("color 4F");
        cout << "\nNo , Array is Not Palindrome \n";
    }

    system("pause>0");
    return 0;
}
