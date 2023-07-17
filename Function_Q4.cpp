#include <iostream>
using namespace std;

void printOddNumbers(int a, int b) {
    // Make sure a is smaller than b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Iterate from a to b and print odd numbers
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Odd numbers between " << num1 << " and " << num2 << " are: "<<endl;
    printOddNumbers(num1, num2);

    return 0;
}

