#include <iostream>
#include <cstdlib> // สำหรับฟ?งก?ชัน rand() และ srand()
#include <ctime>   // สำหรับฟ?งก?ชัน time() เพื่อจับเวลา
using namespace std;

int main() {
    
    
    // 1. ตั้งค?า Seed สำหรับการสุ?ม (เพื่อให?เลขเปลี่ยนไปทุกครั้งที่รันโปรแกรม)
    srand(time(0));
    
    // 2. สุ?มเลข 1 ถึง 100 เก็บไว?ในตัวแปร secret
    // rand() % 100 จะได?ค?า 0-99 ดังนั้นต?อง +1 เพื่อให?เป?น 1-100
    int secret = rand() % 100 + 1;
    int guess;
    cout << "=== Welcome to Guess the Number Game! ===" << endl;
    cout << "I have picked a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;
    cout << "-----------------------------------------" << endl;
    
    // 3. เริ่มวนลูปให?ผู?เล?นทาย
    do {
        cout << "Enter your guess: ";
        cin >> guess; // รับค?าตัวเลขจากผู?ใช?
        if (guess > secret) {
            cout << "Too High! (Mak gern pai) Try again." << endl;
        }
        else if (guess < secret) {
            cout << "Too Low! (Noi gern pai) Try again." << endl;
        }
        else {
            cout << "Correct! You got it." << endl; // ทายถูก
        }
        cout << endl; // เว?นบรรทัดให?อ?านง?าย
    } while (guess != secret); // ถ?ายังทายไม?ถูก (guess ไม?เท?ากับ secret) ให?วนกลับไปทำซ้ำ
    cout << "=== Game Over ===" << endl;
    return 0;
}

