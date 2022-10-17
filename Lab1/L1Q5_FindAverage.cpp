#include <iostream>

using namespace std;

const int SIZE = 5;

int main() 
    {
        float arr[SIZE] , i = 1 , avg;

        while (i <= SIZE)
            {
                for (int j = 0; j < SIZE; j++)
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

    