#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the cross pattern: "<<endl;
    cin >> size;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == j || i == size - j + 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << std::endl;
    }

    return 0;
}

