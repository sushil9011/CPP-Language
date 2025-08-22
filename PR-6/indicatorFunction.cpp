#include <iostream>
using namespace std;

void arrayOutput(int *a, int size)
{
    cout << endl
         << endl
         << "Cubed Array" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << *(a + i * size + j) << "\t";
        }
        cout << endl;
    }
}

void cubedArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int &val = *(a + i * size + j);
            val = val * val * val;
        }
    }

    arrayOutput(a, size);
}