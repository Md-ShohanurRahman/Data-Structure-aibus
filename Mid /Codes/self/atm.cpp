#include <iostream>
using namespace std;

int main() {
    int rm, cn, rp, cq;

    // Taking matrix sizes from the user
    cout << "Enter rows and columns of the first matrix: ";
    cin >> rm >> cn;

    cout << "Enter rows and columns of the second matrix: ";
    cin >> rp >> cq;

    // Check if addition is possible
    if (rm != rp || cn != cq) {
        cout << "Error: Matrices must have the same dimensions to be added." << endl;
        return 0;
    }

    // Declare matrices
    int A[100][100], B[100][100], C[100][100];

    // Taking input for first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rm; i++) {
        for (int j = 0; j < cn; j++) {
            cin >> A[i][j];
        }
    }

    // Taking input for second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rp; i++) {
        for (int j = 0; j < cq; j++) {
            cin >> B[i][j];
        }
    }

    // Adding both matrices
    for (int i = 0; i < rm; i++) {
        for (int j = 0; j < cn; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Displaying the result
    cout << "Resultant Matrix after Addition:" << endl;
    for (int i = 0; i < rm; i++) {
        for (int j = 0; j < cn; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
