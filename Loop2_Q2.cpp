#include<iostream>
using namespace std;
int main()
{
 cout<<"Armstrong numbers between 100 to 500 are :"<<endl;
 for(int i=100;i<500;i++)
 {
int sum = 0;
int temp = i;
while(temp!=0)
{
sum = sum+((temp%10)*(temp%10)*(temp%10));
temp = temp/10;
}
if(sum == i)
{
cout << i <<endl;
}
 }
 return 0;
}

