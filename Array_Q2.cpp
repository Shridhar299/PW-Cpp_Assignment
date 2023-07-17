#include <iostream>
using namespace std;

int SumOfMinMax(int arr[], int n) {
    if (n == 0)
        return 0; 

    int minVal = arr[0]; // Assume the first element is the minimum
    int maxVal = arr[0]; // Assume the first element is the maximum

    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal)
            minVal = arr[i]; // Update the minimum if a smaller element is found

        if (arr[i] > maxVal)
            maxVal = arr[i]; // Update the maximum if a larger element is found
    }

    return minVal + maxVal;
}

int main() {
    int n,i;
    int arr[20];
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Elements of array: "<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    int sum =SumOfMinMax(arr,n);

    cout << "Sum of the greatest and smallest integers: " << sum << endl;

    return 0;
}

