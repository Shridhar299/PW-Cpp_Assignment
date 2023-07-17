#include <iostream>
using namespace std;
int main() {
 int ch;
 float num1, num2;
 cout << "Enter two numbers: " << endl;
 cin >> num1 >> num2;
 cout<<"Enter choice"<<endl<<"1: Addition"<<endl<<"2: Subtraction"<<endl<<"3: Multiplication"<<endl<<"4: Division"<<endl;
 cin>>ch;
 switch (ch) {
 case 1:
 cout << num1 << " + " << num2 << " = " << num1 + num2;
 break;
 case 2:
 cout << num1 << " - " << num2 << " = " << num1 - num2;
 break;
 case 3:
 cout << num1 << " * " << num2 << " = " << num1 * num2;
 break;
 case 4:
 cout << num1 << " / " << num2 << " = " << num1 / num2;
 break;
 default:
 cout << "Invalid Option";
 break;
 }
 return 0;
}

