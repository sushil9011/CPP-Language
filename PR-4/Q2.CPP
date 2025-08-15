#include <iostream>
using namespace std;

int main()
{

    int row, col;

    cout << "Enter Row Size : ";
    cin >> row;
    cout << "Enter Column Size : ";
    cin >> col;

    int a[row][col];

    cout << endl
         << "Array Elements Input" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << endl
         << "Array Elements Output" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // process to find largest element in 2d array
    int largest = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (largest < a[i][j])
            {
                largest = a[i][j];
            }
        }
    }

    cout << endl
         << "Largest Element in Array is : " << largest << endl
         << endl;

    return 0;
}