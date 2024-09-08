// This program calculates and displays the several values
// and various percentages for those values.

#include <iostream>
using namespace std;
int main()
{
	double salary = 6000;
	double percent1 = 5, percent2 = 7, percent3 = 10;
	double contribution1, contribution2, contribution3;
	contribution1 = salary * percent1 / 100;
	contribution2 = salary * percent2 / 100;
	contribution3 = salary * percent3 / 100;
	cout << "Amount of contribution at " << percent1 << "% is $" <<
		contribution1 << endl;
	cout << "Amount of contribution at " << percent2 << "% is $" <<
		contribution2 << endl;
	cout << "Amount of contribution at " << percent3 << "% is $" <<
		contribution3 << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
