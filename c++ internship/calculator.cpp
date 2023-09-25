#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Simple Calculator\n";
    cout << "-----------------\n";

    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the arithmetic operation
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please enter +, -, *, or /." << endl;
    }

    return 0;
}
