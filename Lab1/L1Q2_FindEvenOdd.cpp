#include <iostream>

using namespace std;

int main()
    {
        int x , y;
        do
        {
            cout << "Type a number (0 to exit) : ";
            cin >> x;


            if (x % 2 == 0 && x != 0)
                {
                    cout << x << " is even." << endl;
                }

            if (x % 2 != 0 && x != 0)
                {
                    cout << x << " is odd." << endl;
                }

            if (x == 0)
                {
                    cout << "Thank you.";
                }
            
        } while (x != 0);

        return 0;
    }