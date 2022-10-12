#include <iostream>

using namespace std;

int main()
    {
        int a1 , a2 , a3 ,a4;

        cout << "Enter four intergers: ";
        cin >> a1 >> a2 >> a3 >> a4;

        if(a1 > a2 && a1 > a3 && a1 > a4)
            cout << "Maximum number : " << a1;
        if(a2 > a1 && a2 > a3 && a2 > a4)
            cout << "Maximum number : " << a2;
        if(a3 > a1 && a3 > a2 && a3 > a4)
            cout << "Maximum number : " << a3;
        if(a4 > a1 && a4 > a2 && a4 > a3)
            cout << "Maximum number : " << a4;
        else
            cout << "All numbers are equal";

        return 0;
  } 