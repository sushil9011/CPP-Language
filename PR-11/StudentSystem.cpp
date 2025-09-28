#include <iostream>
#include <vector>
#include <string.h>   
using namespace std;

template <typename Tid, typename Tname>
class StudentSystem
{
private:
    vector<Tid> ids;
    vector<Tname> names;

public:
    // Add new student
    void insertStudent(Tid sid, Tname sname)
    {
        for (size_t i = 0; i < ids.size(); i++)
        {
            if (ids[i] == sid)
            {
                cout << "ID already exists!\n";
                return;
            }
        }
        ids.push_back(sid);
        names.push_back(sname);
        cout << "Student inserted successfully!\n";
    }

    // Show all students
    void showStudents()
    {
        if (ids.empty())
        {
            cout << "No student records found.\n";
            return;
        }
        cout << "\n--- Student List ---\n";
        for (size_t i = 0; i < ids.size(); i++)
        {
            cout << "ID : " << ids[i] << " | Name : " << names[i] << endl;
        }
    }

    // Search by ID
    void findStudent(Tid sid)
    {
        for (size_t i = 0; i < ids.size(); i++)
        {
            if (ids[i] == sid)
            {
                cout << "Found → ID: " << ids[i] << " | Name: " << names[i] << endl;
                return;
            }
        }
        cout << "Student not found!\n";
    }

    // Delete by ID
    void deleteStudent(Tid sid)
    {
        for (size_t i = 0; i < ids.size(); i++)
        {
            if (ids[i] == sid)
            {
                ids.erase(ids.begin() + i);
                names.erase(names.begin() + i);
                cout << "Record deleted successfully!\n";
                return;
            }
        }
        cout << "Student not found!\n";
    }
};
