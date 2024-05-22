# Advanced Programming TA Exercises
C++ Advanced Programming TA Exercises

The following exercises were presented by me (as a Teacher Assistant) in the Advanced Programming class (QIAU). The solutions to each exercise are also below.

## Exercise 1: Simple Function

Write a C++ program that defines a function to calculate the sum of two integers and prints the result.
Demonstrate how to call this function.
```c++
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
```

-------------------------------------------------------------------------------------------------------------
## Exercise 2: Function Overloading

Extend the previous program by overloading the sum function to handle integers, floating-point numbers, and strings.
Write a program that calls the appropriate function based on the input data type.
```c++
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

```
-------------------------------------------------------------------------------------------------------------
## Exercise 3: Recursive Function

1) Write a recursive function to calculate the factorial of a positive integer.
Prompt the user to input a number and then calculate and display its factorial using the recursive function.

2) Write a program using recursive that prints a (pyramid). User must specify the height or this star.
- Downward and upward

```c++
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
```
```c++
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
```
-------------------------------------------------------------------------------------------------------------
## Exercise 4: For Loop

Write a C++ program that uses a for loop to print the first 30 even numbers.
Implement a break statement to exit the loop when a multiple of 7 is encountered.
```c++
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
```
-------------------------------------------------------------------------------------------------------------
## Exercise 5: While Loop

Create a program that uses a while loop to print the numbers from 1 to 20, but skip printing any multiples of 3.
Use the continue statement to skip these numbers.
```c++
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
```
-------------------------------------------------------------------------------------------------------------
## Exercise 6: If-Else Conditionals

1) Write a C++ program that classifies a student based on their average scores in 3 subjects and determines pass/fail status for each subject. passing score is 10 and maximum score is 20. 
If the average score is 18 or above, classify as "Excellent."
If the average score is between 18 and 16, classify as "Very Good."
If the average score is between 16 and 12, classify as "Average."
If the average score is below 12, classify as "Needs Improvement."

2) Write a program that takes a user's age as input and determines:
if 
    the person is a child (0-12 years),
    a teenager (13-19 years),
    an adult (20-59 years),
    or a senior (60+ years).
Use if-else statements to make the decision.
```c++
#include <iostream>

using namespace std;

int main() {
    double subject1, subject2, subject3;
    const double passingScore = 10.0;
    const double maxScore = 20.0;

    // Input scores for each subject
    cout << "Enter the score for Subject 1 (0-20): ";
    cin >> subject1;

    cout << "Enter the score for Subject 2 (0-20): ";
    cin >> subject2;

    cout << "Enter the score for Subject 3 (0-20): ";
    cin >> subject3;

    // Ensure scores are within the valid range (opt.)
    subject1 = max(0.0, min(maxScore, subject1));
    subject2 = max(0.0, min(maxScore, subject2));
    subject3 = max(0.0, min(maxScore, subject3));

    // Calculate the average score
    double average = (subject1 + subject2 + subject3) / 3;

    // Display the student's classification based on the average
    cout << "Average Score: " << average << endl;

    if (average >= 18) {
        cout << "Classification: Excellent" << endl;
    } else if (average >= 16) {
        cout << "Classification: Very Good" << endl;
    } else if (average >= 12) {
        cout << "Classification: Average" << endl;
    } else if (average >= 12) {
    } else {
        cout << "Classification: Needs Improvement" << endl;
    }

    // Determine pass/fail status for each subject
    cout << "Pass/Fail Status for Each Subject:" << endl;
    cout << "Subject 1: " << (subject1 >= passingScore ? "Passed" : "Failed") << endl; // shorthand if/else (using ternary operator)
    cout << "Subject 2: " << (subject2 >= passingScore ? "Passed" : "Failed") << endl;
    cout << "Subject 3: " << (subject3 >= passingScore ? "Passed" : "Failed") << endl;

    return 0;
}
```
```c++
#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << "You are a child." << endl;
    } else if (age >= 13 && age <= 19) {
        cout << "You are a teenager." << endl;
    } else if (age >= 20 && age <= 59) {
        cout << "You are an adult." << endl;
    } else if (age >= 60) {
        cout << "You are a senior." << endl;
    } else {
        cout << "Invalid age." << std::endl;
    }
    return 0;
}
```
-------------------------------------------------------------------------------------------------------------
## Exercise 7: Pointers and Swap Function

Design a C++ program that uses pointers to swap the values of two integers.
Write a function that takes two integer pointers and swaps the values they point to.
```c++
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
```
-------------------------------------------------------------------------------------------------------------
## Exercise 8: Pointer Arithmetic

Extend the previous program by implementing a function that adds a constant value to each element of an integer array using pointer arithmetic.
Print the modified array.
```c++
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
```
-------------------------------------------------------------------------------------------------------------
## Exercise 9: Recursive Function with Pointers

Write a recursive function that calculates the nth Fibonacci number using pointers.
The function should accept an integer n and return the nth Fibonacci number. Use pointers to optimize the calculation.
```c++
#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int result = fibonacci(n);
    cout << "Fibonacci number at position " << n << ": " << result << std::endl;
    return 0;
}
```
-------------------------------------------------------------------------------------------------------------
## Exercise 10: Advanced Data Structure with Pointers

Design a program that simulates a linked list.
Implement functions to insert, delete, and display elements in the linked list. Use pointers to manage the list.
Demonstrate the functionality of the linked list with user input and manipulation.
```c++
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    bool search(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void remove(int value) {
        Node* current = head;
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->data == value) {
                if (prev == nullptr) {
                    head = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }


    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.insert(5);
    list.insert(10);
    list.insert(15);

    std::cout << "Linked List Contents: ";
    list.display();

    int searchValue = 10;
    if (list.search(searchValue)) {
        std::cout << searchValue << " found in the list." << std::endl;
    } else {
        std::cout << searchValue << " not found in the list." << std::endl;
    }

    int deleteValue = 10;
    list.remove(deleteValue);
    std::cout << "After removing " << deleteValue << ": ";
    list.display();

    return 0;
}
```
-------------------------------------------------------------------------------------------------------------
## Exercise 11: Class, Constructor, Setter and Getter, Public and Private
Design a class Student to represent a student's information with the following attributes:

- Private Attributes:
name: A string to store the student's name.
age: An integer to store the student's age.
gpa: A float to store the student's GPA.

- Public Member Functions:
Constructor: Implement a parameterized constructor that initializes the name, age, and gpa.
Setters & Getters: Implement setter and getter functions for each attribute (setName, setAge, setGPA, getName, getAge, getGPA).
displayInfo: A function to display the student's information (name, age, GPA).

Ensure that the setter functions validate input values (e.g., age between 18 and 30, GPA between 0.0 and 4.0) and handle any invalid inputs appropriately.
```c++
#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
    Shape(const string& n, const string& c)
        : name(n), color(c) {}

    void setName(const string& n) {
        name = n;
    }

    void setColor(const string& c) {
        color = c;
    }

    string getName() const {
        return name;
    }

    string getColor() const {
        return color;
    }

private:
    string name;
    string color;
};

class Rectangle : public Shape {
public:
    Rectangle(const string& n, const string& c, double l, double w)
        : Shape(n, c), length(l), width(w) {}

    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

private:
    double length;
    double width;
};

int main() {
    Shape shape("Generic Shape", "Red");
    Rectangle rectangle("Rectangle", "Blue", 5.0, 3.0);

    cout << "Shape: " << shape.getName() << ", Color: " << shape.getColor() << endl;
    cout << "Rectangle: " << rectangle.getName() << ", Color: " << rectangle.getColor() << ", Length: " << rectangle.getLength() << ", Width: " << rectangle.getWidth() << endl;

    return 0;
}

```
-------------------------------------------------------------------------------------------------------------
## Exercise 12: Matrix Operations with Templates
implement a C++ template class Matrix that supports basic matrix operations.
The matrix should be a 2D array, and the class should include functions for addition, subtraction, multiplication, and display of matrices.
```c++
#include <iostream>
#include <vector>

template <typename T>
class Matrix {
private:
    std::vector<std::vector<T>> data;
    size_t rows;
    size_t cols;

public:
    // Constructor with dimensions and optional initialization
    Matrix(size_t rows, size_t cols, const std::vector<std::vector<T>>& values = {})
        : rows(rows), cols(cols), data(rows, std::vector<T>(cols)) {
        if (!values.empty()) {
            for (size_t i = 0; i < rows; ++i) {
                for (size_t j = 0; j < cols; ++j) {
                    data[i][j] = values[i][j];
                }
            }
        }
    }

    // Matrix addition
    Matrix<T> add(const Matrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions do not match for addition.");
        }

        Matrix<T> result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    // Matrix subtraction
    Matrix<T> subtract(const Matrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrix dimensions do not match for subtraction.");
        }

        Matrix<T> result(rows, cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }

        return result;
    }

    // Matrix multiplication
    Matrix<T> multiply(const Matrix<T>& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Invalid matrix dimensions for multiplication.");
        }

        Matrix<T> result(rows, other.cols);
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < other.cols; ++j) {
                for (size_t k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Display the matrix
    void display() const {
        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};

int main() {
    // Create matrices
    Matrix<int> A(2, 3, {{1, 2, 3}, {4, 5, 6}});
    Matrix<int> B(2, 3, {{7, 8, 9}, {10, 11, 12}});
    Matrix<int> C(3, 2, {{1, 2}, {3, 4}, {5, 6}});

    // Display matrices
    std::cout << "Matrix A:\n";
    A.display();
    std::cout << "\nMatrix B:\n";
    B.display();
    std::cout << "\nMatrix C:\n";
    C.display();

    // Perform operations
    try {
        Matrix<int> result_add = A.add(B);
        Matrix<int> result_subtract = A.subtract(B);
        Matrix<int> result_multiply = A.multiply(C);

        // Display results
        std::cout << "\nA + B:\n";
        result_add.display();
        std::cout << "\nA - B:\n";
        result_subtract.display();
        std::cout << "\nA * C:\n";
        result_multiply.display();
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
```
-----------------------------------------------------
## Exercise 13: C++ Standard Libraries

Create a Line class in C++ that can store two points, calculate the length of the line, and combine two lines such that the resulting line spans from the first point of the first line to the second point of the second line. (Use C++ Libraries)
```c++
#include <cmath>
#include <iostream>

using namespace std;

class Line {
private:
    double x1, y1, x2, y2;

public:
    Line() : x1(0), y1(0), x2(0), y2(0) {}

    Line(double x1, double y1, double x2, double y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

    void setPoints(double x1, double y1, double x2, double y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    Line operator+(const Line& other) const {
        Line result;
        result.x1 = x1;
        result.y1 = y1;
        result.x2 = other.x2;
        result.y2 = other.y2;
        return result;
    }

    double length() const {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

int main() {
    double x1, y1, x2, y2;

    cout << "Enter the coordinates of the first point for Line 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point for Line 1 (x2 y2): ";
    cin >> x2 >> y2;

    Line line1;
    line1.setPoints(x1, y1, x2, y2);

    cout << "Enter the coordinates of the first point for Line 2 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point for Line 2 (x2 y2): ";
    cin >> x2 >> y2;

    Line line2;
    line2.setPoints(x1, y1, x2, y2);

    Line combinedLine = line1 + line2;

    cout << "Line 1 length: " << line1.length() << endl;
    cout << "Line 2 length: " << line2.length() << endl;
    cout << "Combined Line length: " << combinedLine.length() << endl;

    return 0;
}
```
-----------------------------------------------------
## Exersice 14: Vector

Write a C++ program that defines a function to calculate the Binomial Coefficient using Vector.
```c++
#include <iostream>
#include <vector>

using namespace std;

int binomialCoefficient(int n, int k) {
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= min(i, k); ++j) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    return dp[n][k];
}

int main() {
    int n = 5;
    int k = 2;
    int result = binomialCoefficient(n, k);
    
    cout << "C(" << n << ", " << k << ") = " << result << endl;

    return 0;
}
```
-------------------------------------------------------------------------------------------------------------
## Exercise 15: Implement a Generic Stack

Implement a generic stack data structure using C++ templates. The stack should support the following operations:

- push() - Adds an element to the top of the stack.
- pop() - Removes the top element from the stack.
- top() - Returns the top element of the stack without removing it.
- empty() - Returns true if the stack is empty, false otherwise.
- size() - Returns the number of elements in the stack.

You should create a templated class Stack that can be instantiated with any data type.

```c++
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string> // Include the <string> header

template<typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    // Pushes an element onto the top of the stack
    void push(const T& value) {
        elements.push_back(value);
    }

    // Removes and returns the top element of the stack
    T pop() {
        if (empty()) {
            throw std::out_of_range("Stack is empty");
        }
        T topElement = elements.back();
        elements.pop_back();
        return topElement;
    }

    // Returns the top element of the stack without removing it
    T top() const {
        if (empty()) {
            throw std::out_of_range("Stack is empty");
        }
        return elements.back();
    }

    // Returns true if the stack is empty, false otherwise
    bool empty() const {
        return elements.empty();
    }

    // Returns the number of elements in the stack
    size_t size() const {
        return elements.size();
    }
};

int main() {
    // Test with integer values
    Stack<int> intStack;
    intStack.push(5);
    intStack.push(10);
    intStack.push(15);
    std::cout << "Top element: " << intStack.top() << std::endl; // Output: 15
    std::cout << "Stack size: " << intStack.size() << std::endl; // Output: 3
    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl; // Output: 10

    // Test with double values
    Stack<double> doubleStack;
    doubleStack.push(3.14);
    doubleStack.push(6.28);
    std::cout << "Top element (double): " << doubleStack.top() << std::endl; // Output: 6.28
    std::cout << "Stack size (double): " << doubleStack.size() << std::endl; // Output: 2

    // Test with string values
    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    std::cout << "Top element (string): " << stringStack.top() << std::endl; // Output: World
    std::cout << "Stack size (string): " << stringStack.size() << std::endl; // Output: 2

    return 0;
}
```


