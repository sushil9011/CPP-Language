#include <iostream>
using namespace std;

int main()
{

    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << "Array Elements Input" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    //process of printing only negative elements
    cout << endl << "Negative Elements from an Array" << endl << endl;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
            cout << a[i] << " ";
    }
    
    return 0;
}