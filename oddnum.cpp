#include<iostream>
using namespace std;
void odd(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int a,b;
	cout<<"Enter two number:"<<endl;
	cin>>a>>b;
	odd(a,b);
	return 0;
}
