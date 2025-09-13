#include <iostream>
using namespace std;
class Student
{
    public:
    string  stu_name;
    int  stu_age;
    int  stu_std;
    string  stu_birthday;
    long long  stu_mobilenumber;

    Student(){
    cout << "enter stu_name : ";
    cin >> stu_name;

    cout << "enter stu_age : ";
    cin >> stu_age;

    cout << "enter stu_std :";
    cin >> stu_std;

    cout <<"enter stu_birhtday : ";
    cin >> stu_birthday;

    cout <<"enter stu_mobilenumber : ";
    cin >> stu_mobilenumber;
    }
    void display() {
        cout << "\n------ Student Details ------\n";
        cout << "Name: " << stu_name << endl;
        cout << "Age: " << stu_age << endl;
        cout << "Standard: " << stu_std << endl;
        cout << "Birthday: " << stu_birthday << endl;
        cout << "Mobile Number: " << stu_mobilenumber << endl;
    }
};
int main() {
    // Pehle student ka object
    Student s1;
    s1.display();

    // Dusre student ka object
    Student s2;
    s2.display();

    return 0;
}
