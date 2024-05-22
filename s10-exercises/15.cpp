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
