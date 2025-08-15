#include <iostream>
using namespace std;

int main() {

    int row, col;

    cout << "Enter Row Size : ";
    cin >> row;
    cout << "Enter Column Size : ";
    cin >> col;

    int a[row][col];

    cout << endl << "Array Elements Input" << endl << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl << "Without Transpose of Matrix" << endl << endl;
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    // Process To Transpose this matrix
    cout << endl << "Transposed Matrix" << endl << endl;
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}