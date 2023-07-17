#include <iostream>
using namespace std;

void printSquares() {
    for (int i = 1; i <= 5; i++) {
        int square = i * i;
        cout<<square <<" ";
    }
}

int main() {
    printSquares();
    return 0;
}

