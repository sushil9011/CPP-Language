#include <iostream>
#include "StudentSystem.cpp"
using namespace std;

int main()
{
    StudentSystem<int, string> system1;
    int choice, student_id_data;
    string student_name;

    do
    {
        cout << endl << "== Student Management Menu ==" << endl;
        cout << "1. Insert Student" << endl;
        cout << "2. Show All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Student ID: ";
            cin >> student_id_data;
            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin, student_name);
            system1.insertStudent(student_id_data, student_name);
            break;

        case 2:
            system1.showStudents();
            break;

        case 3:
            cout << "Enter ID to search: ";
            cin >> student_id_data;
            system1.findStudent(student_id_data);
            break;

        case 4:
            cout << "Enter ID to delete: ";
            cin >> student_id_data;
            system1.deleteStudent(student_id_data);
            break;

        case 0:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
