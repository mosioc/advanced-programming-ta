#include <iostream>

using namespace std;

int main() {
    cout << "0 ";
    for (int i = 2; i <= 30; i += 2) {  // i = i + 2;
        if (i % 7 == 0) {
            cout << "\n multiple of 7 encountered, break!";
            break;  // Exit the loop when a multiple of 7 is encountered
            // continue; skip this iteration
        }
        cout << i << " ";
    }
    return 0;
}