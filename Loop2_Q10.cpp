#include <iostream>
using namespace std;

int main() {
    int length, breadth;

    // Prompt the user for length and breadth
    cout << "Enter the length of the rectangle: "<<endl;
    cin >> length;

    cout << "Enter the breadth of the rectangle: "<<endl;
    cin >> breadth;

    // Print the rectangle using asterisks
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < breadth; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

