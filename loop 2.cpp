#include <iostream>
using namespace std;;

int main() {
    int number;
    int sum = 0;

    // Ask for positive number
    cout << "Enter a positive integer: ";
    cin >> number;

    // Input validation
    while (number < 0) {
        cout << "Invalid input! Please enter a POSITIVE integer: ";
        cin >> number;
    }

    // Loop to calculate sum
    for (int i = 1; i <= number; i++) {
        sum += i;
    }

    // Output result
    cout << "The sum of numbers from 1 to " << number << " is: " << sum << endl;

    return 0;
  }

