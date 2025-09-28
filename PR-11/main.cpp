#include <iostream>
#include "StudentSystem.cpp"
using namespace std;

int main()
{
    StudentSystem<int, string> system1;
    int choice, sid;
    string sname;

    do
    {
        cout << "\n===== Student Management Menu =====\n";
        cout << "1. Insert Student\n";
        cout << "2. Show All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Student ID: ";
            cin >> sid;
            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin, sname);
            system1.insertStudent(sid, sname);
            break;

        case 2:
            system1.showStudents();
            break;

        case 3:
            cout << "Enter ID to search: ";
            cin >> sid;
            system1.findStudent(sid);
            break;

        case 4:
            cout << "Enter ID to delete: ";
            cin >> sid;
            system1.deleteStudent(sid);
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
