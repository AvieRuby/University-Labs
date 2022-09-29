#include <iostream>

using namespace std;

int Sum(int a[5])
    {
        int sum;

        sum = a[0] + a[1] + a[2] + a[3] + a[4];
        return sum;
    }



int main()
    {

        int i , j = 1 , arr[5];

        cout << "Enter five numbers and the program will calculate the sum of the numbers." << endl;

        for (i = 0; i < 5; i++)
            {
                cout << "Enter number " << j << ": ";
                cin >> arr[i];
                j++;
            }

        cout << "You have entered: " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << endl;
        
        cout << "Sum of the numbers entered is: " << Sum (arr);
    }