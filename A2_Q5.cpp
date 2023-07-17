#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a 3-digit number: "<<endl;
    cin >> num;

    int digit1 = num / 100; // extract the first digit
    int digit2 = (num / 10) % 10; // extract the second digit
    int digit3 = num % 10; // extract the third digit
    int sum = digit1 + digit2 + digit3;

    cout << "The sum of the digits of " << num << " is " << sum << endl;

    return 0;
}

