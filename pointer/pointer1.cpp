// #include <iostream>
// using namespace std;

// main(){
//     // int n = 10;

//     // int ptr = n; 

//     // cout << "this is bytes :" << &n <<  endl;\

    
// }
#include <iostream>
using namespace std;

int main() {
    int num = 10;          // normal integer variable
    int *ptr = &num;       // pointer variable, storing address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer (ptr) stores: " << ptr << endl;
    cout << "Value at pointer (*ptr): " << *ptr << endl;

    return 0;
}
