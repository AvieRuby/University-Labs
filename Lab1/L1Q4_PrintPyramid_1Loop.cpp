#include <iostream>

using namespace std;


int main()
{
    int x = 5 , num;
    string str{""};

    for(int i = 1; i <= x; i++)
        {
            num += 1;
            str = str + " " + to_string(num);
            cout << str << endl;
        }

    return 0;
}