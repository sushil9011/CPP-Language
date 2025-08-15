#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter number of elements ";
    cin >> size;

    int* a = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element a[" << i << "]: ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
}
