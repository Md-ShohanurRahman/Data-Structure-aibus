#include <iostream>
using namespace std;

int main() {
    float a, b, c, d;
    cout << "Enter elements of 2x2 matrix (a b c d): ";
    cin >> a >> b >> c >> d;

    float det = a * d - b * c;

    if (det == 0) {
        cout << "Inverse doesn't exist (determinant is 0)." << endl;
    } else {
        cout << "Inverse matrix is:" << endl;
        cout << (d / det) << " " << (-b / det) << endl;
        cout << (-c / det) << " " << (a / det) << endl;
    }

    return 0;
}
