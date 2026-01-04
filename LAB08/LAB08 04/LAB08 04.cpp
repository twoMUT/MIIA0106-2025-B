// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียน swapStudent(Student&, Student&) (ห้ามใช้ swap library)
// TODO 3) เขียน sortByID(Student[], size) ให้เรียง id น้อย -> มาก
// TODO 4) รับข้อมูล 5 คน แล้วเรียง แล้วแสดงผล
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

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

static void printStudents(Student students[], int size) {
	cout << "ID\tnickname\tLine ID\t Phone\n";
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
        cout << students[i].id << "\t" << students[i].nickname << "\t" 
            << students[i].lineId << "\t" << students[i].phone << "\n";
        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        //เอามาจากข้อ2
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
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}

