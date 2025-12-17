#include <iostream>
using namespace std;

// --- ส?วนการประกาศฟ?งก?ชัน (Function Definition) ---
// ชื่อฟ?งก?ชัน: isPrime
// หน?าที่: ตรวจสอบว?าเป?นจำนวนเฉพาะหรือไม?
// Input: รับค?าจำนวนเต็ม n มา 1 ตัว
// Output: คืนค?า true ถ?าเป?นจำนวนเฉพาะ, false ถ?าไม?ใช?
bool isPrime(int n) {
    // 1. เลขที่น?อยกว?าหรือเท?ากับ 1 ไม?ใช?จำนวนเฉพาะ
    if (n <= 1) return false;
    // 2. เลข 2 เป?นจำนวนเฉพาะ (เป?นเลขคู?เดียวที่เป?น)
    if (n == 2) return true;
    // 3. เลขคู?ที่มากกว?า 2 ไม?ใช?จำนวนเฉพาะ
    if (n % 2 == 0) return false;
    // 4. ตรวจสอบตัวหารที่เป?นเลขคี่ ตั้งแต? 3 ขึ้นไป
    // วนลูปตรวจสอบถึงแค?รากที่สองของ n (ใช? i*i <= n เพื่อประสิทธิภาพ)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            // ถ?าเจอตัวที่หารลงตัว แสดงว?าไม?ใช?จำนวนเฉพาะ
            return false;
        }
    }
    
    // 5. ถ?าตรวจสอบมาทั้งหมดแล?วไม?เจอตัวหารเลย แสดงว?าเป?นจำนวนเฉพาะ
    return true;
}
// --- ส?วนโปรแกรมหลัก (Main Function) --
int main() {
    int num;
    cout << "--- Prime Number Checker ---" << endl;
    cout << "Enter a positive integer: ";
    cin >> num; // รับข?อมูลนำเข?า
    // เรียกใช?ฟ?งก?ชัน isPrime() แล?วนำผลลัพธ?ไปตรวจสอบใน if
    if (isPrime(num) == true) {
        cout << "\n>>> Result: " << num << " is a PRIME number." << endl;
        cout << "(มันคือจำนวนเฉพาะ)" << endl;
    }
    else {
        cout << "\n>>> Result: " << num << " is NOT a prime number." << endl;
        cout << "(มันไม?ใช?จำนวนเฉพาะ)" << endl;
    }
    return 0;
}

