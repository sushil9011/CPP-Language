<<<<<<< HEAD
#include <iostream>
using namespace std;

main() {
    for(int i = 6; i >= 1; i--) {
        for(int s = 1; s < i; s++) {
            cout << "  ";
        }

        for(int j = i; j <= 6; j++) {
            cout << "* ";
        }

        for(int j = 5; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 2; i <= 6; i++) {
        for(int s = 1; s < i; s++) {
            cout << "  ";
        }

        for(int j = i; j <= 6; j++) {
            cout << "* ";
        }

        for (int j = 5; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }

=======
#include <iostream>
using namespace std;

main() {
    for(int i = 6; i >= 1; i--) {
        for(int s = 1; s < i; s++) {
            cout << "  ";
        }

        for(int j = i; j <= 6; j++) {
            cout << "* ";
        }

        for(int j = 5; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 2; i <= 6; i++) {
        for(int s = 1; s < i; s++) {
            cout << "  ";
        }

        for(int j = i; j <= 6; j++) {
            cout << "* ";
        }

        for (int j = 5; j >= i; j--) {
            cout << "* ";
        }
        cout << endl;
    }

>>>>>>> 65f34ce (Project-3)
}