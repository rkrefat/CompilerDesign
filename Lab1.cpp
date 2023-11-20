#include <iostream>

using namespace std;

int main() {
    int number = 0;

    cout << "Enter your input: ";

    while (!(cin >> number)) {
        cout << "\nThe input is Non-Numeric. Please try again: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    cout << "You entered a numeric value: " << number << endl;

    return 0;
}
