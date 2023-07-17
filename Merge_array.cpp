#include<iostream>
using namespace std;

void readArray(int[],int);
void merge(int[],int[], int , int );
int main()
{
int n1,n2;
int arr1[100], arr2[100];
cout<<"Enter the size of 1st Array"<<endl;
cin>>n1;
cout<<"Enter the elements of 1st array"<<endl;
readArray(arr1,n1);
cout<<"Enter the size of 2nd Array"<<endl;
cin>>n2;
cout<<"Enter the elements of 2nd array"<<endl;
readArray(arr2,n2);
merge(arr1,arr2,n1,n2);

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
cout<<arr[i]<<endl;
}
}
void merge(int arr1[], int arr2[], int n1, int n2)
{
int n3, i, j;
n3 = n1 + n2;
int c[n3];
for(i = 0; i < n1; i++)
{
c[i] = arr1[i];
}
for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
{
c[j] = arr2[i];
}
cout<<"Array Elements After Merging"<<endl;
displayArray(c,n3);

}

