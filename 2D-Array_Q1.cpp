#include <iostream>
using namespace std;

void ReadArray(int a[10][10], int, int);
void DisplayArray(int a[10][10], int, int);
void MaxNum(int a[10][10], int, int);

int main()
{
    int r, c, sum;
    int a[10][10];
    double avg;
    
    cout << "Enter the order of 2D matrix: "<<endl;
    cin >> r >> c;
    
    cout << "\nEnter the Elements of Matrix:\n";
    ReadArray(a, r, c);
    
    cout << "\nThe Elements of Matrix are:\n";
    DisplayArray(a, r, c);
    
    MaxNum(a, r, c);
    
    return 0;
}

void ReadArray(int a[10][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
}

void DisplayArray(int a[10][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void MaxNum(int a[10][10], int r, int c)
{
    int max = a[0][0];
    
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
            
        }
    }
    
    cout << "Max is: " << max << endl;
}

