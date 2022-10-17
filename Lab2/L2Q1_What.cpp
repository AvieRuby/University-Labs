#include <iostream>
using namespace std;

struct Employee {
    string first_name;
    string last_name;
    string emp_num;
    int age;
};


void printer1(Employee *emp){
    cout << emp->first_name << " " 
         << emp->last_name  << ":"
         << emp->emp_num    << ":"
         << emp->age << endl;
}

void printer2(const Employee &emp){
    cout << emp.first_name << " " 
         << emp.last_name  << ":"
         << emp.emp_num    << ":"
         << emp.age << endl;
}
int main(){
    Employee *emp;

    emp = new Employee;
    emp->first_name = "Bryan";
    emp->last_name = "Chin";
    emp->emp_num = "1201203698";
    emp->age = 20;

    printer1(emp);
    printer2(*emp);

    Employee a{"Bryan", "Chin", "12011", 22};
    printer2(a);

    
}