#include <iostream>
using namespace std;

int main() {
    int number;

    // Get input from the user
    cout << "Enter a number: "<<endl;
    cin >> number;

    // Check if the number is negative
    if (number < 0) {
        // If negative, multiply by -1 to get the absolute value
        number = -number;
    }

    // Print the absolute value
    cout << "The absolute value is: " << number << endl;

    return 0;
}

