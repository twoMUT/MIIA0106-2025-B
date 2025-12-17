#include <iostream>
using namespace std;
int main()
{
	cout << "1.)=========For-While-Do Loop 1-10========" << endl;
	cout << "Forloop" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
	}
	cout << endl << endl;
	cout << "While Loop" << endl;
	int j = 1;
	while (j <= 10) {
		cout << j << " ";
		j++;
	}
	cout << endl << endl;
	cout << " Do-While Loop" << endl;
	int k = 1;
	do {
		cout << k << " ";
		k++;
	} while (k <= 10);
	cout << endl << endl;
	return 0;
}

