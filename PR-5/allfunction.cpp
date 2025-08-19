#include <iostream>
using namespace std;

void calculatorInput(int &i, int &j)
{
    cout << endl
         << "Enter First Value : ";
    cin >> i;
    cout << "Enter Second Value : ";
    cin >> j;
}

void sum(int i, int j)
{
    cout << endl
         << "Addition of " << i << " & " << j << " is : " << i + j;
}

void sub(int i, int j)
{
    cout << endl
         << "Subtraction of " << i << " & " << j << " is : " << i - j;
}

void mul(int i, int j)
{
    cout << endl
         << "Multiplication of " << i << " & " << j << " is : " << i * j;
}

void divi(int i, int j)
{
    cout << endl
         << "Division of " << i << " & " << j << " is : " << i / j;
}

void modulo(int i, int j)
{
    cout << endl
         << "Modulus of " << i << " & " << j << " is : " << i % j;
}

void operationChoice(int ch)
{
    int i, j;
    switch (ch)
    {
    case 1:
        calculatorInput(i, j);
        sum(i, j);
        break;

    case 2:
        calculatorInput(i, j);
        sub(i, j);
        break;

    case 3:
        calculatorInput(i, j);
        mul(i, j);
        break;

    case 4:
        calculatorInput(i, j);
        divi(i, j);
        break;

    case 5:
        calculatorInput(i, j);
        modulo(i, j);
        break;

    case 0:
        cout << endl
             << "Program Exited Successfully....!" << endl;
        break;

    default:
        cout << endl
             << "Invalid Choice" << endl;
    }
}
