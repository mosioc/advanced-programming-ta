#include <iostream>

void addConstant(int* arr, int size, int constant) {
    for (int i = 0; i < size; ++i) {
        *(arr + i) += constant;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int constant = 10;
    addConstant(arr, size, constant);

    std::cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}