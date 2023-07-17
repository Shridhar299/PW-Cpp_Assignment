#include <iostream>
using namespace std;

int findMinimumSum(int a[], int b[], int n) {
    int minSum = INT_MAX;  // Initialize with a large value
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {  // Elements are not at the same index
                int sum = a[i] + b[j];
                if (sum < minSum) {
                    minSum = sum;
                }
            }
        }
    }
    return minSum;
}

int main() {
    int n;
    cout << "Enter the size of the array: "<<endl;
    cin >> n;

    int a[n], b[n];

    cout << "Enter the elements of array a: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the elements of array b: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int minimumSum = findMinimumSum(a, b, n);
    cout << "Minimum sum of two elements: " << minimumSum << endl;

    return 0;
}

