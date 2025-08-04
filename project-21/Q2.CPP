#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Number is Even" << endl;

        if (num % 5 == 0) {
            cout << num << " is divisible by 5";
        } else {
            cout << num << " is not divisible by 5";
        }

    } else {
        cout << "Number is Odd";
    }

}