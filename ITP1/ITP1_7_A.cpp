#include<iostream>

using namespace std;

int main() {
    int m, f, r;

    while (1) {
        cin >> m >> f >> r;

        if (m == -1 && f == -1 && r == -1) {
            break;
        }

        if (m == -1 || f == -1 || m + f < 30) {
            cout << "F" << endl;
        } else if (30 <= m + f && m + f < 50) {
            if (r >= 50) {
                cout << "C" << endl;
            } else {
                cout << "D" << endl;
            }
        } else if (50 <= m + f && m + f < 65) {
            cout << "C" << endl;
        } else if (65 <= m + f && m + f < 80) {
            cout << "B" << endl;
        } else {
            cout << "A" << endl;
        }
    }

    return 0;
}