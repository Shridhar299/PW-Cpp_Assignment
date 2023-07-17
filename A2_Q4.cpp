#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a 5-digit number: "<<endl;
    cin >> num;

    int first = num / 10000; // extract the first digit
    int secondLast = (num / 10) % 10; // extract the second last digit
    int sum = first+ secondLast;

    cout << "The sum of the first and second last digits of " << num << " is " << sum << endl;

    return 0;
}

