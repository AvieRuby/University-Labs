#include <iostream>

using namespace std;

const int SIZE = 5;

int Sum(int a[SIZE])
    {
        int sum = 0;

        for(int i = 0; i < SIZE; i++ )
            {
                sum += a[i];
            }
        
        return sum;
    }

int main()
    {

        int i , j = 1 , arr[SIZE];

        cout << "Enter five numbers and the program will calculate the sum of the numbers." << endl;

        for (i = 0; i < 5; i++)
            {
                cout << "Enter number " << j << ": ";
                cin >> arr[i];
                j++;
            }

        cout << "You have entered: " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << endl;
        
        cout << "Sum of the numbers entered is: " << Sum (arr);

        return 0;
    }