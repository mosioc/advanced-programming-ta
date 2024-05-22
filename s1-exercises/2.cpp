#include <iostream>
#include <string>

using namespace std;

// Function to calculate the sum of two integers
int calculateSum(int num1, int num2) {
    return num1 + num2;
}

// Function to calculate the sum of two floating-point numbers
double calculateSum(double num1, double num2) {
    return num1 + num2;
}

// Function to concatenate two strings
string calculateSum(const string str1, const string str2) {
    return str1 + str2;
}

int main() {
    char choice;
    cout << "Choose the data type to sum (i: int, f: float, s: string): ";
    cin >> choice;

    if (choice == 'i') {
        int num1, num2;
        cout << "Enter the first integer: ";
        cin >> num1;
        cout << "Enter the second integer: ";
        cin >> num2;
        int sum = calculateSum(num1, num2);
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    } else if (choice == 'f') {
        double num1, num2;
        cout << "Enter the first floating-point number: ";
        cin >> num1;
        cout << "Enter the second floating-point number: ";
        cin >> num2;
        double sum = calculateSum(num1, num2);
        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    } else if (choice == 's') {
        string str1, str2;
        cout << "Enter the first string: ";
        cin >> str1;
        cout << "Enter the second string: ";
        cin >> str2;
        string result = calculateSum(str1, str2);
        cout << "The concatenated string is: " << result << endl;
    } else {
        cout << "Invalid choice. Please choose 'i', 'f', or 's'." << endl;
    }

    return 0;
}
