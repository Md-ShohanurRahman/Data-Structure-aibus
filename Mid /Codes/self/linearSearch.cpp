#include <iostream>
using namespace std;

int main() {
    int mimo[10] = {32, 4, 5, 12, 5, 54, 6, 23, 3, 5};
    int n;
    cout << "Enter the number to be searched: " << endl;
    cin >> n;

    int i; // declared outside the loop
    for (i = 0; i < 10; i++) {
        if (n == mimo[i]) {
            break;  // number found
        }
    }

    if (i < 10) {
        cout << n << " was found in index " << i << " of the array." << endl;
    } else {
        cout << n << " was not found in the array." << endl;
    }

    return 0;
}
