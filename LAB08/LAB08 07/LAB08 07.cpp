#include <iostream>
#include <string>
using namespace std;


struct Phone {
    string home;
    string mobile;
};

struct Parrent {
    string name;
    string relationship;
    Phone contact;
};

struct student {
    string id;
    string nickname;
    string lineid;
    Phone myContact;
    Parrent myParent;
};

int main() {

    student s1;

    // Student Data
    s1.id = "6812100008";
    s1.nickname = "Two";
    s1.lineid = "gant.dev";

    // Student Contact Info
    s1.myContact.mobile = "0950455785";
    s1.myContact.home = "0950455786";

    // Parent Data
    s1.myParent.name = "Wanachai";
    s1.myParent.relationship = "Father";

    // Parent Contact Info
    s1.myParent.contact.mobile = "089-987-6543";
    s1.myParent.contact.home = "02-123-4567";

    cout << "Student ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Student Mobile: " << s1.myContact.mobile << endl;
    cout << "Parent Name: " << s1.myParent.name << endl;
    cout << "Parent Mobile: " << s1.myParent.contact.mobile << endl;

    return 0;
}




