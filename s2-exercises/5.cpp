#include <iostream>

using namespace std;

int main() {
    int i = 1;
    while (i <= 20) {
        if (i % 3 == 0) {
            i++;
            continue;  // Skip multiples of 3 (skip this iteration)
        }
        cout << i << " ";
        i++;
    }
    return 0;
}
