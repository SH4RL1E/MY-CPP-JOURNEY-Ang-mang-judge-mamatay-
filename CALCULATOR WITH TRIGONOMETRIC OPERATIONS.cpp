#include <iostream>
#include <cmath> // for mathematical functions like sin, cos, etc.

using namespace std;

int main() {
    float num1, num2; // variables to store input numbers
    char operation; // variable to store operation to be performed

    cout << "Welcome to Scientific Calculator!" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /, ^, s for sin, c for cos, t for tan): ";
    cin >> operation;

    // conditional statements to perform different operations based on user input
    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } else if (operation == '/') {
        // check for division by 0
        if (num2 == 0) {
            cout << "Cannot divide by 0" << endl;
        } else {
            cout << "Result: " << num1 / num2 << endl;
        }
    } else if (operation == '^') {
        cout << "Result: " << pow(num1, num2) << endl;
    } else if (operation == 's') {
        cout << "Result: " << sin(num1) << endl;
    } else if (operation == 'c') {
        cout << "Result: " << cos(num1) << endl;
    } else if (operation == 't') {
        cout << "Result: " << tan(num1) << endl;
    } else {
        // if user inputs invalid operation
        cout << "Invalid operation" << endl;
    }

    return 0;
}
