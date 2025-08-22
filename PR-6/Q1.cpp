#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;   

    cout << "Enter any string: ";
    getline(cin, text);

    int len = text.length();   

    cout << "Length of string is: " << len << endl;

    return 0;
}

