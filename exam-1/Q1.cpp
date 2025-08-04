#include <iostream>
using namespace std;

    int main(){
        int num;

        cout << "Enter a Number :";
        cin >> num;

        if (num > 0)
        {
            cout << "Number is Postive";
        }
        else if(num < 0)
            {
                cout << "Number is Negative";
            }
            else
            {
                cout << "Number is Zero";
            }
    }