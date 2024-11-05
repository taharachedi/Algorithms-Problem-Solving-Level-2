#include <iostream>
#include <cmath>

using namespace std;

float Read_Num() {
    float N = 0;

    cout << "Please Enter A Number : \n";
    cin >> N;

    return N;
}


float Get_Fraction_Part(float N) {
    return N - int(N);
}


int My_Ceil(float N) {

    int intPart = int(N);
    float Fraction_Part = Get_Fraction_Part(N);

    if (abs(Fraction_Part) > 0) 
    {
        if (N > 0)
            return ++intPart;
        else
            return intPart;
    }
    else
        return N;
}



int main()
{
    system("color 6F");

    float N = Read_Num();

    cout << "My Ceil Result  : " << My_Ceil(N) << endl;
    cout << "C++ ceil Result : " << ceil(N) << endl;

    system("pause>0");
    return 0;
}
