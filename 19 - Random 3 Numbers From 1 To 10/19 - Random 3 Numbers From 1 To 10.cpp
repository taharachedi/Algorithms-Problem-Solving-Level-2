#include <iostream>
#include <cstdlib>
using namespace std;

// Function To Generate A Random Number 

int Random_Number(short From, short To) {
    return rand() % (To - From + 1) + From;
}



int main()
{
    system("color f4");


    srand((unsigned)time(NULL));   //Seeds the random number generator in C++, called only once

    cout << Random_Number(1,10) << endl;
    cout << Random_Number(1,10) << endl;
    cout << Random_Number(1,10) << endl;

    cout << "---------------------------\n";
    cout << "Random Number : " << rand() << endl;

    return 0;
}
