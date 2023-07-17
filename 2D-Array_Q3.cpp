#include <iostream>
using namespace std;

void setZeroes(int matrix[10][10], int m, int n) {
    int rows[10] = {0};
    int cols[10] = {0};

    // Traverse the matrix and mark rows and columns to be set to zero
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    // Set rows to zero
    for (int i = 0; i < m; i++) {
        if (rows[i] == 1) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set columns to zero
    for (int j = 0; j < n; j++) {
        if (cols[j] == 1) {
            for (int i = 0; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(int matrix[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    int matrix[10][10];

    cout << "Enter the number of rows: ";
    cin >> m;

    cout << "Enter the number of columns: ";
    cin >> n;

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    printMatrix(matrix, m, n);

    setZeroes(matrix, m, n);

    cout << "Modified Matrix:" << endl;
    printMatrix(matrix, m, n);

    return 0;
}

