#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        case '%':
            // Modulus works only with integers
            if ((int)num2 != 0)
                cout << "Result: " << (int)num1 % (int)num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Invalid operator.";
            break;
    }

    return 0;
}