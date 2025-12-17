#include <iostream>
#include <string>
using namespace std;

// ฟ?งก?ชันสำหรับแสดงภาพจำลองรถและเส?น
void drawSimulation(int position) {
    cout << "\n--------------------------------\n";
    cout << "      [ Visual Simulation ]      \n";
    cout << "--------------------------------\n";

    if (position == 1) { // เส?นอยู?ซ?าย
        cout << "      Line  |  Car    \n";
        cout << "       ||   | [==]    \n";
        cout << "       ||   | [==]    \n";
        cout << "      //    |         \n";
        cout << "\nStatus: SENSOR DETECTS LEFT!\n";
    }
    else if (position == 2) { // เส?นอยู?ขวา
        cout << "      Car   |  Line   \n";
        cout << "     [==]   |   ||    \n";
        cout << "     [==]   |   ||    \n";
        cout << "            |    \\\\   \n";
        cout << "\nStatus: SENSOR DETECTS RIGHT!\n";
    }
    else if (position == 3) { // เส?นอยู?กลาง
        cout << "         Car & Line      \n";
        cout << "           [==]          \n";
        cout << "           [||]          \n";
        cout << "           [||]          \n";
        cout << "\nStatus: SENSOR DETECTS CENTER\n";
    }
}
int main() {
    int sensorInput;
    bool isRunning = true;
    cout << "=== Line Following Robot Simulation ===" << endl;
    cout << "Imagine you are the sensor." << endl;

    while (isRunning) {
        cout << "\n========================================" << endl;
        cout << "Where is the black line?" << endl;
        cout << "[1] Left" << endl;
        cout << "[2] Right" << endl;
        cout << "[3] Center" << endl;
        cout << "[0] Exit Program" << endl;
        cout << "Enter sensor value (0-3): ";
        cin >> sensorInput;
        // ประมวลผลตามเงื่อนไข (Algorithm)
        switch (sensorInput) {
        case 1:
            drawSimulation(1);
            cout << ">>> ACTION: Turn LEFT" << endl;
            cout << "    (Right Motor: ON, Left Motor: OFF)" << endl;
            break;
        case 2:
            drawSimulation(2);
            cout << ">>> ACTION: Turn RIGHT" << endl;
            cout << "    (Left Motor: ON, Right Motor: OFF)" << endl;
            break;
        case 3:
            drawSimulation(3);
            cout << ">>> ACTION: Go FORWARD" << endl;
            cout << "    (Left Motor: ON, Right Motor: ON)" << endl;
            break;
        case 0:
            cout << "Exiting simulation..." << endl;
            isRunning = false;
            break;
        default:
            cout << "Invalid input! Please enter 1, 2, or 3." << endl;
        }
    }
    return 0;
}
