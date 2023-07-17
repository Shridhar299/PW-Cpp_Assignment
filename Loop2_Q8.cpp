#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int lines;

    cout << "Enter the number of lines for the prime triangle: ";
    cin >> lines;

    int count = 1;
    int number = 2;

    for (int i = 1; i <= lines; ++i) {
        for (int j = 1; j <= i; ++j) {
            bool isPrime = true;
            for (int k = 2; k <= sqrt(number); ++k) {
                if (number % k == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                cout << number << " ";
                ++count;
            } else {
                --j;
            }

            ++number;
        }
        cout << endl;
    }

    return 0;
}

