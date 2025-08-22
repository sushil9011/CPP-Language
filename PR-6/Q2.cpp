#include <iostream>
#include "indicatorFunction.cpp"
using namespace std;

int main()
{
    int size;

    cout << "Enter Row & Column Size : ";
    cin >> size;

    int a[size][size];
    cout << endl << endl << "Input of Array" << endl << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cubedArray(&a[0][0], size);

}