#include<iostream>
using namespace std;

void readArray(int[],int);
void displayArray(int[],int);
void minmaxArray(int[],int);

int main()
{
int n,s ;
int arr[100];
cout<<"Enter the size of array:"<<endl;
cin>>n;
cout<<"Enter the elements of array:"<<endl;
readArray(arr,n);
minmaxArray(arr,n);
}

void readArray(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
	cin>>arr[i];
}
}

void displayArray(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
cout<<"arr[i]";
}
}

void minmaxArray(int arr[],int n)
{
int min, max,i;
min=max=arr[0];
for(i=1; i<n; i++)
{
if(min>arr[i])
min=arr[i];
if(max<arr[i])
max=arr[i];
}
cout<<"minimum of array:"<<min<<endl;
cout<<"maximum of array:"<<max;
}

