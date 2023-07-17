#include <iostream>
using namespace std;
bool vote(int age)
{
 if(age>=18)
 {
 return true;
 }
 return false;
 
}
int main()
{
 int age;
 int i;
 for(i=1;i<=2;i++)
 {
 cout<<"Enter the age : "<<endl;
 cin>>age;
 if(vote(age)==true)
 {
 cout<<"Yes"<<endl;
 }
 else
 {
 cout<<"No"<<endl;
 }
 }
return 0;
}

