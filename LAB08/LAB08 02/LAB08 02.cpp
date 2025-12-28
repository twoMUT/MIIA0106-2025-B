#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
		cout << "Enter ID : ";
		cin >> students[i].id;
		cout << "Enter Nickname : ";
		cin >> students[i].nickname;
		cout << "Enter Line ID: ";
		cin >> students[i].lineId;
		cout << "Enter phone: ";
		cin >> students[i].phone;
        
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    cout << "ID\tnickname\tLine ID\t Phone\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
        cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";

    }

    return 0;
}

