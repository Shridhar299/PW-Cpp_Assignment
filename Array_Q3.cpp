#include <iostream>
using namespace std;
void reverse(int arr[],int n){
	int temp,j,k;
	for(j=0,k=n-1;j<k;j++,k--)
	{
		temp=arr[j];
		arr[j]=arr[k];
		arr[k]=temp;
		
	}
	
}
int main()
{
	int n,i;
    int arr[20];
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Elements of array: "<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	reverse(arr,n);
	cout<<"Reversed array: "<<endl;
    for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
	}
	return 0;
}
