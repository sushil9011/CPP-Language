#include <iostream>
using namespace std;

main(){
    // int n = 10;

    // int ptr = n; 

    // cout << "this is bytes :" << &n <<  endl;\

    int name;
    cout << "enter name : " ;
    cin >> name;

    if(name != "char"){
        cout << " this is total bytes : " << sizeof(name);
    }
}