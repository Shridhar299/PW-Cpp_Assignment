#include <iostream>
using namespace std;
int main() {
    int a, b;

    cout << "Enter the value of a:"<<endl;
    cin >> a;
    cout << "Enter the value of b:"<<endl;
    cin >> b;

    if (a < 50 && a < b) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}

