#include <iostream>

using namespace std; 

// Function to calculate the sum of two integers
int calculateSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;

    // Prompt the user for two integers
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Call the calculateSum function and store the result in a variable
    int sum = calculateSum(num1, num2);

    // Print the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}