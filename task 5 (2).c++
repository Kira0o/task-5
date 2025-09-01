#include <iostream>
using namespace std;

int main() {
      int matrix[2][2];
    int sum = 0;

    cout << "Enter the elements of the 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "enter elem [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += matrix[i][j];
        }
    }

    cout << "the sum of elem in the 2x2 matrix is: " << sum << endl;






















}
