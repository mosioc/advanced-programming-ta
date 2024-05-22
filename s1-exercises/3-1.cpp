#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0) {
        cout << "not a positive integer!";
    } else {
        int result = factorial(num);
        cout << "Factorial: " << result << endl;
    }
    return 0;
}