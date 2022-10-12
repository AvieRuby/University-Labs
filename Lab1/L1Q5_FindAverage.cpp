#include <iostream>

using namespace std;

int main() 
    {
        int arr[5] , i = 1 , avg;

        while (i <= 5)
            {
                for (int j = 0; j < 5; j++)
                    {
                        cout << "Enter mark: ";
                        cin >> arr[j];
                        i++;
                    }
            }

        avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;


        cout << "Mark average is: " << avg;

        return 0;

    }

    