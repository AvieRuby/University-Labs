#include <iostream>

using namespace std;

int main()
    {
        int i , n;
        float sum = 0.0 , avg;
        float *p;

        cout << "How many marks would you like to enter? ";
        cin >> n;

        p = new float[n];

        for (i=0; i<n; i++)
            {
                cout << "Enter marks " << i + 1 << ": ";
                cin >> p[i];
            }

        cout << "You have entered: ";
        for (i=0; i<n; i++)
            {
                cout << p[i] << " " ;
                sum += p[i];
                avg = sum / n;
            }

        cout << "\nSum of marks is: " << sum;
        cout << "\nAverage marks is: " << avg;

        return 0;
    }