#include <iostream>
#include "allfunction.cpp"
using namespace std;

int main()
{

    int ch, i;

    while (ch != 0)
    {
        cout << endl
             << endl
             << "Calculator Program" << endl
             << endl;

        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for EXIT " << endl;
        cout << "Enter Choice : ";
        cin >> ch;

        operationChoice(ch);
        i++;
    }

    return 0;
}