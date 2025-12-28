    // TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
    // TODO 2) เขียนฟังก์ชัน printStudent(Student s) ให้แสดงผลครบทุก field
    // TODO 3) ใน main รับข้อมูล 1 คน แล้วเรียก printStudent(s1)


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

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
    // TODO
    cout << "ID\tnickname\tLine ID\t Phone \n";
    cout << s1.id << "\t" << s1.nickname << "\t" << s1.lineId << "\t" << s1.phone << "\n";
}
// TODO: ???????????????? ??????????????????????
void inputStudent(Student& s1) {
    cout << "Enter ID: ";
    cin >> s1.id;

    cout << "Enter Nickname: ";
    cin >> s1.nickname;

    cout << "Enter Line ID: ";
    cin >> s1.lineId;

    cout << "Enter Phone: ";
    cin >> s1.phone;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
    inputStudent(s1);

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
    printStudent(s1);

    return 0;
}
