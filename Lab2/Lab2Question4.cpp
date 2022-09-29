#include <iostream>

using namespace std;

void add(int& r , int v)
    {
        r = r + 5;
        v = v + 5;
    }

int main()
    {
        int x , y;

        cout << "Enter value 1: ";
        cin >> x;
        cout << "Enter value 2: ";
        cin >> y;

        add(x , y);

        cout << "The effect of passing value1 by reference is: " << x << endl;
        cout << "The effect of passing value1 by reference is: " << y;
        
        return 0;
    }