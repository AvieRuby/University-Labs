#include <iostream>

using namespace std;

struct Employee
    {
        string name;
        float salary;
    };

int main()
    {
        Employee* DynArray;
        int i , j , x = 1;

        cout << "Enter number of employees: ";
        cin >> i;

        DynArray = new Employee[i];

        for ( j = 0; j < i; j++ )  
            {
                cout << "\nEmployee: " << x << endl;
                cout << "       Enter name: ";
                cin >> DynArray[j].name;
                cout << "       Enter salary: ";
                cin >> DynArray[j].salary;

                x++;
            }


        cout << "\n\n*****Employee Details*******\n" << endl;

        for ( int j = 0; j < i; j++ )
            {
                cout << "Name  : " << DynArray[j].name << endl;
                cout << "Salary: " << DynArray[j].salary << endl << endl;       
            }

        delete[] DynArray;
        return 0;
    }