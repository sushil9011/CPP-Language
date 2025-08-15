#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter number of elements: ";
    cin >> size;

    int a[size], b[size], c[size];

    cout << endl << "Input elements of array a:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element a[" << i << "]: ";
        cin >> a[i];
    }

    cout << endl << "Input elements of array b:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element b[" << i << "]: ";
        cin >> b[i];
    }

    // Adding arrays
    for (int i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    } 

    cout << endl << "Addition of a and b (array c):" << endl;
    for (int i = 0; i < size; i++) {
        cout << c[i] << " ";
    }

    cout << endl;
    return 0;
}
