#include <iostream>
using namespace std;

int main() {
    int rm, cn, rp, cq;

    // Take dimensions of first matrix
    cout << "Enter rows and columns of first matrix (A): ";
    cin >> rm >> cn;

    // Take dimensions of second matrix
    cout << "Enter rows and columns of second matrix (B): ";
    cin >> rp >> cq;

    // Check if multiplication is possible
    if (cn != rp) {
        cout << "Error: Number of columns of first matrix must equal number of rows of second matrix." << endl;
        return 0;
    }

    // Declare matrices
    int A[100][100], B[100][100], C[100][100] = {0};

    // Input matrix A
    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < rm; i++) {
        for (int j = 0; j < cn; j++) {
            cin >> A[i][j];
        }
    }

    // Input matrix B
    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < rp; i++) {
        for (int j = 0; j < cq; j++) {
            cin >> B[i][j];
        }
    }

    // Multiply matrices: C = A × B
    for (int i = 0; i < rm; i++) {
        for (int j = 0; j < cq; j++) {
            for (int k = 0; k < cn; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result
    cout << "Resultant Matrix after Multiplication (A x B):" << endl;
    for (int i = 0; i < rm; i++) {
        for (int j = 0; j < cq; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
