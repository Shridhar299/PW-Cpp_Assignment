#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first number: "<<endl;
    cin >> num1;
    cout << "Enter the second number: "<<endl;
    cin >> num2;
    int isEqual = (num1 == num2) ? 1 : 0;

    if(isEqual) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}

