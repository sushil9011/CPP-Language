#include <iostream>
using namespace std;
class car
{
public:
int car_id;
string car_company_name;
string car_color;
string car_model;
int car_release_year;
};
int main(){

    car c;
    cout << "enter car_id : ";
    cin >> c.car_id;
    cout << "enter car_company_name : ";
    cin >> c.car_company_name;
    cout << "enter car_color : ";
    cin >> c.car_color;
    cout << "enter car_model : ";
    cin >> c.car_model;
    cout << "enter car_release_year : ";
    cin >> c.car_release_year;

    cout << "\n------ car Details ------\n";
    cout << "ID: " <<  c.car_id << endl;
    cout << "Name: " << c.car_company_name << endl;
    cout << "Age: " << c.car_color << endl;
    cout << "Role: " << c.car_model << endl;
    cout << "Salary: " << c.car_release_year << endl;
}
    
