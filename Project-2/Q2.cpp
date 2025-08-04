#include <iostream>
using namespace std;

 main()
{
    int number, digitCount = 0, digit, disariumSum = 0;

    cout << "Enter Any Number: ";
    cin >> number;

    int originalNumber = number;

    while (number != 0) {
        digitCount++;
        number = number / 10;
    }

    number = originalNumber;

    for (int position = digitCount; position >= 1; position--) {
        digit = number % 10;
        int powerResult = 1;
        for (int exp = 1; exp <= position; exp++) {
            powerResult *= digit;
        }
        disariumSum += powerResult;
        number = number / 10;
    }

    if (originalNumber == disariumSum)
        cout << "This number is a Disarium Number";
    else
        cout << "This is Not a Disarium Number";
}
