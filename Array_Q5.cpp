#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    // Calculate the expected sum of numbers from 0 to n
    int expectedSum = (n * (n + 1)) / 2;
    
    // Calculate the actual sum of numbers in the array
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
    // The missing number is the difference between the expected sum and the actual sum
    int missingNumber = expectedSum - actualSum;
    
    return missingNumber;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array:"<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: "<< missingNumber << endl;
    
    return 0;
}

