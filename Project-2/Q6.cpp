#include <iostream>
using namespace std;

int main()
{
    long int inputNumber;
    cout << "Enter your Number: ";
    cin >> inputNumber;

    int digitCount = 0;

    do {
        inputNumber = inputNumber / 10;
        digitCount++;
    } while (inputNumber != 0);

    cout << "Total Number of Digits: " << digitCount << endl;
}
