#include <iostream>
#include <cmath>

using namespace std;

float Read_Number() {

    float N = 0;

    cout << "Please Enter A Number : \n";
    cin >> N;

    return N;
}


float Get_Fraction_Part(float N) {
    return N - int(N);
}

int My_Floor(float N) {

    int intPart = int(N);
    float Fraction_Part = Get_Fraction_Part(N);

    if (abs(Fraction_Part) > 0)
    {
        if (N > 0)
            return intPart;
        else
            return --intPart;
    }
    else
        return N;
}


int main()
{
    system("color 6F");

    float N = Read_Number();


    cout << "My_Floor Result  : " << My_Floor(N) << endl;
    cout << "C++ Floor Result : " << floor(N) << endl;

    system("pause>0");
    return 0;
}
