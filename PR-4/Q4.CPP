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

    int u_row, u_col;

    cout << endl
         << "Enter Row : ";
    cin >> u_row;

    // row sum 
    cout << "Elements of Row : ";
    int r_sum = 0, c_sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == u_row)
            {
                r_sum += a[i][j];
                cout << a[i][j] << " , " ;
            }
        }
    }

    cout << endl << "Sum of Row : " << r_sum << endl;

    cout << endl
         << "Enter Column : ";
    cin >> u_col;

    // col sum 
    cout << "Elements of Column : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == u_col)
            {
                c_sum += a[i][j];
                cout << a[i][j] << " , " ;
            }
        }
    }

    cout << endl << "Sum of Column : " << c_sum << endl;


    return 0;
}