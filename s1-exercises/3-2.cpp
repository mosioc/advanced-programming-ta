#include <iostream>

using namespace std;

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }
}

void printStars(int stars) {
    for (int i = 0; i < stars; i++) {
        cout << "* ";
    }
    cout << endl;
}

void printDownwardStarPyramid(int height, int spaces) {
    // downward
    if (height > 0) {
        printSpaces(spaces);
        printStars(height);
        printDownwardStarPyramid(height - 1, spaces + 1);  // recursive
    }
}

void printUpwardStarPyramid(int height, int currentHeight) {
    // upward
    if (currentHeight <= height) {
        printSpaces(height - currentHeight);
        printStars(currentHeight);
        printUpwardStarPyramid(height, currentHeight + 1);  // recursive
    }
}

int main() {
    int height;
    char choice;

    cout << "Downward or Upward? (D: Downward, U: Upward): ";
    cin >> choice;
    cout << "Enter the height of the pyramid: ";
    cin >> height;

    if (height > 0) {
        if (choice == 'D' || choice == 'd') {
            printDownwardStarPyramid(height, 0);
        } else if (choice == 'U' || choice == 'u') {
            printUpwardStarPyramid(height, 1);
        }
    } else {
        cout << "Height should be a positive integer." << endl;
    }

    return 0;
}