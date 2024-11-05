#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum enCharType { Special_Character = 1 , Digit = 2 , Capital_Letter = 3 , Small_Letter = 4 };


int Random_Number(int From, int To) {
    return rand() % (To - From + 1) + From;
}



char Get_RandomCharacter(enCharType Type) {

    switch (Type)
    {
    case enCharType::Special_Character:
        return char(Random_Number(33, 47));

    case enCharType::Digit:
        return char(Random_Number(48, 57));

    case enCharType::Capital_Letter:
        return char(Random_Number(65, 90));

    case enCharType::Small_Letter:
        return char(Random_Number(97, 122));

    }
}




string Random_Word(enCharType CharType , int length) {

    string Word = "";
    for (int i = 1; i <= length; i++)
    {
        Word += Get_RandomCharacter(CharType);
    }
    return Word;
}


string Random_Key() {
    string key = "";

    key += Random_Word(enCharType::Capital_Letter, 4) + " - ";
    key += Random_Word(enCharType::Capital_Letter, 4) + " - ";
    key += Random_Word(enCharType::Capital_Letter, 4) + " - ";
    key += Random_Word(enCharType::Capital_Letter, 4);


    return key;
}



void Fill_Array_Keys(string arr[100], int& length ) {

    cout << "How Many Keys ?  \n";
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        arr[i] = Random_Key();
    }
}


void Print_Array(string arr[100], int length) {
    cout << "\nArray Elements : \n";

    for (int i = 1; i <= length; i++)
    {
        cout << "Array [ " << i << " ] : " << arr[i] << endl;
    }
}



int main()
{
    system("color 6F");
    srand((unsigned)time(NULL));
    
    string arr[100];
    int length;

    Fill_Array_Keys(arr, length);
    Print_Array(arr, length);


    system("pause>0");
    return 0;
}
