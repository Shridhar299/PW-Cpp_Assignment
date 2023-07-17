#include<iostream>
using namespace std;

void readArray(int[],int);
int linear(int A[],int n,int key);

int main()
{
int n,occ,key;
int arr[100];
cout<<"Enter the size of array:"<<endl;
cin>>n;
cout<<"Enter the elements of array:"<<endl;
readArray(arr,n);
cout<<"Enter the element to be search in array:"<<endl;
cin>>key;
occ=linear(arr,n,key);

if(occ>0)
{
cout<<"search is successful"<<endl;
cout<<"Element is= "<<key;
}
else
cout<<"search is not successful"<<endl;
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

int linear(int arr[],int n,int key)
{
int i,occ=0;

for(i=0;i<n;i++)
{
if(key==arr[i])
{
occ++;
}
}
return(occ);
}

