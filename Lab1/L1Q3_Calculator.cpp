#include <iostream>

using namespace std;

int main()
    {
        char x , y;
        int arr[2] , i , ans;

            cout << "Enter an operator (+,-,*,/) : ";
            cin >> x;

            while(x != '+' && x != '-' && x != '*' && x != '/')
                {
                    cout << "Invalut Please Try Aid Inpgain" << endl;
                    cout << "Enter an operator (+,-,*,/) : ";
                    cin >> x;
                }
                
                       
        cout << "Enter two operands : ";
        for (int i = 0; i < 2; i++)
            {
                cin >> arr[i];
            }

        switch (x)
            {
                case '+':            
                    ans = arr[0] + arr[1];
                    break;
                case '-':
                    ans = arr[0] - arr[1];
                    break;
                case '*':
                    ans = arr[0] * arr[1];
                    break;
                case '/':
                    ans = arr[0] / arr[1];
                    break;
                default:
                    break;
            }


        cout << arr[0] << " " << x << " " << arr[1] << " = " << ans;

        return 0;
    }