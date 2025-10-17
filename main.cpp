#include <iostream>
#include <limits>
#include "calculator.h"

using namespace std;

void displayMenu() {
    cout << "\n=== Simple Calculator ===" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
}

int main() {
    Calculator calc;
    int choice;
    double num1, num2, result;

    cout << "Welcome to the C++ Calculator Application!" << endl;

    while (true) {
        displayMenu();
        
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        if (choice == 5) {
            cout << "Thank you for using the calculator. Goodbye!" << endl;
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please select 1-5." << endl;
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
            continue;
        }

        cout << "Enter second number: ";
        cin >> num2;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
            continue;
        }

        try {
            switch (choice) {
                case 1:
                    result = calc.add(num1, num2);
                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                    break;
                case 2:
                    result = calc.subtract(num1, num2);
                    cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                    break;
                case 3:
                    result = calc.multiply(num1, num2);
                    cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                    break;
                case 4:
                    result = calc.divide(num1, num2);
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                    break;
            }
        } catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    return 0;
}
