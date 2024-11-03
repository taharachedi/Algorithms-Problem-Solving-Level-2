#include <iostream>
using namespace std;


void TableHeader()
{
    cout << "\n\n\t\t\tMultiplication Table From 1 To 10 \n\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}

	cout << "\n__________________________________________________________________________________\n";
}


string VerticalBar(int i)
{
	if (i < 10)
		return "   | ";

	else
		return "  | ";
}




void PrintMultiplicationTable()
{
	system("color 3F");

	TableHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << VerticalBar(i);

		for (int j = 1; j <= 10; j++)
		{
			cout << "\t" << i * j ;
		}

		cout << endl;
	}

}




int main()
{
	PrintMultiplicationTable();


	system("pause>0");
    return 0;
}
