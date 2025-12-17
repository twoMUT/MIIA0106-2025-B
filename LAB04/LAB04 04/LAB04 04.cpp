#include <iostream>
using namespace std;

int main()
{
    int id_digits = 8; // เลขท?าย 2 ตัวของรหัสนักศึกษา
    cout << "Multiplication Table of " << id_digits << endl;
    cout << "-----------------------------" << endl;
    // วนลูปตั้งแต? 1 ถึง 12
    for (int i = 1; i <= 12; i++) 
    {
        cout << id_digits << " x " << i << " = " << (id_digits * i) << endl;
    }


    return 0;
}
