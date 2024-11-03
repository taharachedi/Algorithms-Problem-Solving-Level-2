#include <iostream>
using namespace std;

int Read_Number(string Msg){
    int N = 0;
    
    do
    {
        cout << Msg << endl;
        cin >> N;

    } while (N <= 0);

    return N;
}

void Print_InvertedNumPattern(int N) {

    cout << "\n";

    for (int i = N; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

int main()
{
    int N = Read_Number("Please Enter A Number Mr.Taha :");

    Print_InvertedNumPattern(N);

    system("color 6F");
    system("pause>0");
    return 0;
}
