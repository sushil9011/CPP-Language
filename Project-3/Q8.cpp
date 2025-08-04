<<<<<<< HEAD
#include <iostream>
using namespace std;

main() {
    for(int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 5; j++) {
            if((i == 1 && j >= 2 && j <= 4) || (j == 1 && i >= 2 && i <= 5) || (i == 5 && j == 5) || (i == 6 && j >= 2 && j <= 4) || (i == 4 && j >= 3 && j <= 5)) {
                cout << " * ";
            }
            else{
                cout << "   ";
            }
        }
        cout << endl;
    }
=======
#include <iostream>
using namespace std;

main() {
    for(int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 5; j++) {
            if((i == 1 && j >= 2 && j <= 4) || (j == 1 && i >= 2 && i <= 5) || (i == 5 && j == 5) || (i == 6 && j >= 2 && j <= 4) || (i == 4 && j >= 3 && j <= 5)) {
                cout << " * ";
            }
            else{
                cout << "   ";
            }
        }
        cout << endl;
    }
>>>>>>> 65f34ce (Project-3)
}