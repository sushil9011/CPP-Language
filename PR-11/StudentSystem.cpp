#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

template <typename Tid, typename Tname>
class StudentSystem
{
private:
    vector<Tid> id;
    vector<Tname> names;

public:
    void insertStudent(Tid student_id_data, Tname student_name)
    {
        for (size_t i = 0; i < id.size(); i++)
        {
            if (id[i] == student_id_data)
            {
                cout << "ID already exists!" << endl;
                return;
            }
        }
        id.push_back(student_id_data);
        names.push_back(student_name);
        cout << "Student inserted successfully!" << endl;
    }

    void showStudents()
    {
        if (id.empty())
        {
            cout << "No student records found." << endl;
            return;
        }
        cout << endl << "--- Student List ---" << endl;
        for (size_t i = 0; i < id.size(); i++)
        {
            cout << "ID : " << id[i] << " | Name : " << names[i] << endl;
        }
    }

    void findStudent(Tid student_id_data)
    {
        for (size_t i = 0; i < id.size(); i++)
        {
            if (id[i] == student_id_data)
            {
                cout << "Found  ID: " << id[i] << " | Name: " << names[i] << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    }

    void deleteStudent(Tid student_id_data)
    {
        for (size_t i = 0; i < id.size(); i++)
        {
            if (id[i] == student_id_data)
            {
                id.erase(id.begin() + i);
                names.erase(names.begin() + i);
                cout << "Deleted successfully!" << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    }
};
