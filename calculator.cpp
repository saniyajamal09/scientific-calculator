#include <iostream>
#include <cmath>
using namespace std;

void showMenu() {
    cout << "\n===== Scientific Calculator =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Logarithm (base 10)\n";
    cout << "8. Sine\n";
    cout << "9. Cosine\n";
    cout << "10. Tangent\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double num1, num2;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6:
                cout << "Enter number: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Result: " << sqrt(num1) << endl;
                else
                    cout << "Error: Negative number!" << endl;
                break;
            case 7:
                cout << "Enter number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Result: " << log10(num1) << endl;
                else
                    cout << "Error: Log undefined for non-positive numbers!" << endl;
                break;
            case 8:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << sin(num1 * M_PI / 180) << endl;
                break;
            case 9:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << cos(num1 * M_PI / 180) << endl;
                break;
            case 10:
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Result: " << tan(num1 * M_PI / 180) << endl;
                break;
            case 0:
                cout << "Exiting calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
