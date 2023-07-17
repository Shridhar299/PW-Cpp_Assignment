#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum;
	cout <<"Enter number"<<endl;
	cin>>num;
	sum=0;
	while(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	cout<<"Reverse number= "<<sum;
	return 0;
}
