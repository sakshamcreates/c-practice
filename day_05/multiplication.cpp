#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\n--- Arithmetic Results ---\n";

    // 1. Addition
    cout << "Addition (num1 + num2): " << num1 + num2 << endl;

    // 2. Subtraction
    cout << "Subtraction (num1 - num2): " << num1 - num2 << endl;

    // 3. Multiplication
    cout << "Multiplication (num1 * num2): " << num1 * num2 << endl;

    // 4. Division (with zero-check)
    if (num2 != 0) {
        cout << "Division (num1 / num2): " << num1 / num2 << endl;
    } else {
        cout << "Division: Error! Division by zero is not allowed." << endl;
    }

    // 5. Modulus (using integers for demonstration)
    // Note: Modulus operator (%) requires integer operands in C++
    if (num2 != 0) {
        int int1 = static_cast<int>(num1);
        int int2 = static_cast<int>(num2);
        cout << "Modulus (num1 % num2): " << int1 % int2 << endl;
    } else {
        cout << "Modulus: Error! Division by zero is not allowed." << endl;
    }

    return 0;
}