#include<iostream>
using namespace std;
int count(int arr[],int n)
{
	int Even_cnt=0,j,odd_cnt;
	for(j=0;j<n;j++)
	{
		if(arr[j]%2==0)
		{
			Even_cnt++;
		}
	}
	odd_cnt=n-Even_cnt;
	cout<<"Odd Number= "<<odd_cnt<<endl;
	cout<<"Even Number= "<<Even_cnt<<endl;
	return Even_cnt;
}
int main()
{
	int n,i;
	int arr[20];
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	cout<<"Enter the elements of array: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	count(arr,n);
	return 0;
}
