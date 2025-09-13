#include <iostream>
using namespace std;
class Employe{
    public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    int emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;
};
int main (){

    Employe employe;
    cout << "enter emp_id : ";
    cin >> employe.emp_id;
    cout << "enter emp_name : ";
    cin >> employe.emp_name;
    cout << "enter emp_age : ";
    cin >> employe.emp_age;
    cout << "enter emp_role : ";
    cin >> employe.emp_role;
    cout << "enter emp_salary : ";
    cin >>employe. emp_salary;
    cout << "enter emp_city : ";
    cin >> employe.emp_city;
    cout << "enter emp_experience : ";
    cin >> employe.emp_experience;

    cout << "\n------ Employee Details ------\n";
    cout << "ID: " << employe.emp_id << endl;
    cout << "Name: " << employe.emp_name << endl;
    cout << "Age: " << employe.emp_age << endl;
    cout << "Role: " << employe.emp_role << endl;
    cout << "Salary: " << employe.emp_salary << endl;
    cout << "City: " << employe.emp_city << endl;
    cout << "Experience: " << employe.emp_experience << " years" << endl;
    cout << "Company Name: " << employe.emp_company_name << endl;

}
