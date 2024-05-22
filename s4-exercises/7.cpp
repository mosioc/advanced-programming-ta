#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 7;

    std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    swap(&num1, &num2);
    std::cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}