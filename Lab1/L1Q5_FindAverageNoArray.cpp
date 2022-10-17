#include <iostream>

using namespace std;

int main()
    {
        float i , x , sum = 0;
        double avg;

        for(i = 0; i < 5; i++)
            {
                cout << "Enter Marks: ";
                cin >> x;
                sum += x;
            }

        avg = sum / 5;

        cout << "Mark Average is: " << avg;
        
        return 0;
    }