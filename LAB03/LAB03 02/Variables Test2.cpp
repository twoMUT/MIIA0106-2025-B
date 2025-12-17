#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string name;
	int age;
	float height;

	cout << "Enter your name : ";
	getline(cin, name);

	cout << "Enter your age : ";
	cin >> age;

	cout << "Enter your height (cm) : ";
	cin >> height;

	cout << endl;

	cout << "======= Wanachai Thongpradit =======" << endl;
	cout << "Hello, " << name << "!" << endl;
	cout << "Yor are " << age << " years old." << endl;
	cout << "Your height is " << height << " meters. " << endl;

	return 0;




}
