#include <iostream>
#include <string>
using namespace std;

int max0fThree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}


int main()
{
	int a, b, c;
	int maxvalue = -10000000;


	cout << "Enter a integers : ";
	cin >> a;
	cout << "Enter b integers :";
	cin >> b;
	cout << "Enter c integers :";
	cin >> c;

	maxvalue = max0fThree(a, b, c);
	cout << "The maximum  value is : " << maxvalue << endl;

	return 1;
}