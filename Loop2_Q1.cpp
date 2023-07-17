#include <iostream>
using namespace std;
int main()
{
int i,num;
cout << "Enter number" << endl;
cin >> num;
int fact = 1;
for (i=1;i<=num;i++){
fact = fact*i;
 }
cout << "Factorial is:" <<fact << endl;
return 0;
}

