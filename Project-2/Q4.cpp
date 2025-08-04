#include <iostream>
using namespace std;

main()

{
    char start, end;

    cout << "Enter start character: ";
    cin >> start;
    cout << "Enter end character: ";
    cin >> end;

    cout << " All Character print :" << start << end <<endl;

    char ch = start;

    do {
        cout << ch << endl;
        ch++;
    } while (ch<=end);

    cout << endl;

}