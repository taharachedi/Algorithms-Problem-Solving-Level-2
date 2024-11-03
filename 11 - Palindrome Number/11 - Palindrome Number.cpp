#include <iostream>
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


int Reverse_Num(int N) {

	int Remainder = 0;
	int New_Num = 0;

	while (N > 0)
	{
		Remainder = N % 10;
		N = N / 10;

		New_Num = New_Num * 10 + Remainder;
	}

	return New_Num;
}



bool isPalindrome(int N) {

	return N == Reverse_Num(N);
}





int main()
{

	if (isPalindrome(Read_Num("Please Enter A Positive Number :")))
		cout << "Yes, it's A Palindrome Number (t9rah mn limen = mn liser) " << endl;

	else
		cout << "No, it is Not A Palindrome Number " << endl;



	system("color 3F");
	system("pause>0");
    return 0;
}
