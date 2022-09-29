#include <iostream>

using namespace std;

int main()
    {
        int arr[4] , i;

        cout << "Enter four intergers: ";
        
        for(i = 0; i < 4; i++) 
            {
                cin >> arr[i];
            }

        for(i = 1; i < 4; ++i) 
            {
                if(arr[0] < arr[i])
                arr[0] = arr[i];
            }

        cout << "Maximum number : " << arr[0];

        return 0;
  } 
