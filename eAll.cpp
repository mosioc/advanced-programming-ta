/*
## Mehdi Maleki - mosioc ##
-------------------------------------------------------------------------------------------------------------
Exercise 1: Simple Function

Write a C++ program that defines a function to calculate the sum of two integers and prints the result.
Demonstrate how to call this function.

-------------------------------------------------------------------------------------------------------------
Exercise 2: Function Overloading

Extend the previous program by overloading the sum function to handle integers, floating-point numbers, and strings.
Write a program that calls the appropriate function based on the input data type.

-------------------------------------------------------------------------------------------------------------
Exercise 3: Recursive Function

1) Write a recursive function to calculate the factorial of a positive integer.
Prompt the user to input a number and then calculate and display its factorial using the recursive function.

2) Write a program using recursive that prints a (pyramid). User must specify the height or this star.
- Downward and upward

-------------------------------------------------------------------------------------------------------------
Exercise 4: For Loop

Write a C++ program that uses a for loop to print the first 30 even numbers.
Implement a break statement to exit the loop when a multiple of 7 is encountered.

-------------------------------------------------------------------------------------------------------------
Exercise 5: While Loop

Create a program that uses a while loop to print the numbers from 1 to 20, but skip printing any multiples of 3.
Use the continue statement to skip these numbers.

-------------------------------------------------------------------------------------------------------------
Exercise 6: If-Else Conditionals

1) Write a C++ program that classifies a student based on their average scores ...
... in 3 subjects and determines pass/fail status for each subject. passing score is 10 and maximum score is 20. 
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

-------------------------------------------------------------------------------------------------------------
Exercise 7: Pointers and Swap Function

Design a C++ program that uses pointers to swap the values of two integers.
Write a function that takes two integer pointers and swaps the values they point to.

-------------------------------------------------------------------------------------------------------------
Exercise 8: Pointer Arithmetic

Extend the previous program by implementing a function ...
... that adds a constant value to each element of an integer array using pointer arithmetic.
Print the modified array.

-------------------------------------------------------------------------------------------------------------
Exercise 9: Recursive Function with Pointers

Write a recursive function that calculates the nth Fibonacci number using pointers.
The function should accept an integer n and return the nth Fibonacci number. Use pointers to optimize the calculation.

-------------------------------------------------------------------------------------------------------------
Exercise 10: Advanced Data Structure with Pointers

Design a program that simulates a linked list.
Implement functions to insert, delete, and display elements in the linked list. Use pointers to manage the list.
Demonstrate the functionality of the linked list with user input and manipulation.

-------------------------------------------------------------------------------------------------------------
Exercise 11: Class, Constructor, Setter and Getter, Public and Private
Design a class Student to represent a student's information with the following attributes:

- Private Attributes:
name: A string to store the student's name.
age: An integer to store the student's age.
gpa: A float to store the student's GPA.

- Public Member Functions:
Constructor: Implement a parameterized constructor that initializes the name, age, and gpa.
Setters & Getters: Implement setter and getter functions for each attribute (setName, setAge, setGPA, getName, getAge, getGPA).
displayInfo: A function to display the student's information (name, age, GPA).

Ensure that the setter functions validate input values (e.g., age between 18 and 30, GPA between 0.0 and 4.0) ...
... and handle any invalid inputs appropriately.

-------------------------------------------------------------------------------------------------------------
Exercise 12: Matrix Operations with Templates
implement a C++ template class Matrix that supports basic matrix operations.
The matrix should be a 2D array, and ... 
... the class should include functions for addition, subtraction, multiplication, and display of matrices.

-----------------------------------------------------
Exercise 13: Class 
Create a Line class in C++ that can store two points, calculate the length of the line,
and combine two lines such that the resulting line spans from the first point of the first line ... 
... to the second point of the second line.

-----------------------------------------------------
Exersice 14: Vector
Write a C++ program that defines a function to calculate the Binomial Coefficient using Vector.

-------------------------------------------------------------------------------------------------------------
Exercise 15: Implement a Generic Stack
Implement a generic stack data structure using C++ templates. The stack should support the following operations:

- push() - Adds an element to the top of the stack.
- pop() - Removes the top element from the stack.
- top() - Returns the top element of the stack without removing it.
- empty() - Returns true if the stack is empty, false otherwise.
- size() - Returns the number of elements in the stack.

You should create a templated class Stack that can be instantiated with any data type.

*/