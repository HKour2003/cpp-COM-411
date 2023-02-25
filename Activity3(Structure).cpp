#include <iostream>
using namespace std;

// Define a structure for a mathematical operation
struct MathOperation {
    char operatorSymbol;
    double operand1;
    double operand2;
};

int main() {
    // Declare variables to hold user input
    MathOperation operation;
    double result;

    // Prompt the user to enter the operator symbol and operands
    cout << "Enter the operator symbol (+, -, *, /): ";
    cin >> operation.operatorSymbol;
    cout << "Enter operand 1: ";
    cin >> operation.operand1;
    cout << "Enter operand 2: ";
    cin >> operation.operand2;

    // Perform the arithmetic operation based on the operator symbol
    switch (operation.operatorSymbol) {
        case '+':
            result = operation.operand1 + operation.operand2;
            break;
        case '-':
            result = operation.operand1 - operation.operand2;
            break;
        case '*':
            result = operation.operand1 * operation.operand2;
            break;
        case '/':
            result = operation.operand1 / operation.operand2;
            break;
        default:
            cout << "Invalid operator symbol" << endl;
            return 1;
    }

    // Print the result of the arithmetic operation
    cout << "The result is: " << result << endl;

    return 0;
}
