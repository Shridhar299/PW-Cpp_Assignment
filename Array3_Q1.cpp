#include <iostream>

using namespace std;

void readArray(int[], int);
void merge(int[], int[], int, int);
void readArray(int[], int);
void displayArray(int[], int);

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubble(int c[], int n3)
{
    int temp;
    for (int i = 0; i < n3 - 1; i++) {
        for (int j = 0; j < n3 - i - 1; j++) {
            if (c[j] > c[j + 1]) {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }
}

void merge(int arr1[], int arr2[], int n1, int n2)
{
    int n3 = n1 + n2;
    int c[n3];

    for (int i = 0; i < n1; i++)
    {
        c[i] = arr1[i];
    }

    for (int i = 0, j = n1; j < n3 && i < n2; i++, j++)
    {
        c[j] = arr2[i];
    }
    bubble(c,n3);

    cout << "Array Elements After Merging\n";
    displayArray(c, n3);
}

int main()
{
    int n1, n2;
    int arr1[10], arr2[10];

    cout << "Enter the size of 1st Array: ";
    cin >> n1;
    cout << "Enter the elements of 1st array: \n";
    readArray(arr1, n1);
    bubble(arr1,n1);
    cout << "Enter the size of 2nd Array: ";
    cin >> n2;
    cout << "Enter the elements of 2nd array: \n";
    readArray(arr2, n2);
    bubble(arr2,n2);
    merge(arr1, arr2, n1, n2);

    return 0;
}

