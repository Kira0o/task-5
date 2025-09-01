#include <iostream>
using namespace std;

int main() {
    int arr[4];
    int max;


    cout << "Enter 4 integers: " << endl;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    max = arr[0];


    for (int i = 1; i < 4; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    cout << "The maximum number is: " << max << endl;

    
}
