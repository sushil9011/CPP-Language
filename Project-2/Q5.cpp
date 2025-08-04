#include <iostream>
using namespace std;

 main()
{
    char currentChar = 'a';

    do {
        cout << currentChar << endl;
        currentChar += 4;
    } while (currentChar <= 'z');
}
