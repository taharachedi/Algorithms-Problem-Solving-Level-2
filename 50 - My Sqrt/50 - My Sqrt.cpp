#include <iostream>
#include <cmath>

using namespace std;

float Read_Number() {
    float N = 0;

    cout << "Please Enter A Number : \n";
    cin >> N;

    return N;
}

float My_Sqrt(float N) {
    return pow(N, 0.5);
}

int main()
{
    system("color 3F");

    float N = Read_Number();

    cout << "My Sqrt Result  : " << My_Sqrt(N) << endl;
    cout << "C++ sqrt Result : " << sqrt(N) << endl;

    system("pause>0");
    return 0;
}
