#include <iostream>
using namespace std;
int main() {
 int number;
 cout << "Enter an integer: ";
 cin >> number; // checks if the number is positive
 if (number > 0) 
 cout << "positive integer: " << number << endl;
 else
 cout << "Skipped because It is a negative number ";
return 0;
}

