#include <iostream>
#include <cmath>

using namespace std;


float Read_Number() {
    float N = 0;

    cout << "Please Enter A Number \n";
    cin >> N;

    return N;
}


float My_ABS(float N) {

    if (N >= 0)
        return N;
    else
        return N * -1;
}


int main()
{
    float N = Read_Number();

    cout << "My_ABS Result  : " << My_ABS(N) << endl;
    cout << "C++ abs Result : " << abs(N) << endl;

    system("pause>0");
    return 0;
}
