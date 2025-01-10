#include <iostream>
using namespace std;

// Calculator class to handle operations
class Calculator {
public:
    // Method for addition
    double add(double num1, double num2) {
        return num1 + num2;
    }

    // Method for subtraction
    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    // Method for multiplication
    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    // Method for division
    double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;
    char operation;

    // Create an object of Calculator class
    Calculator calc;

    // Ask the user to enter two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Ask the user to choose the operation
    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    // Perform the calculation based on the chosen operation
    switch (operation) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}

