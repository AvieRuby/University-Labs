#include<iostream>

using namespace std;

int main()
    {
        int i , j , x , y , z;

        x = 5;
        y = x - 1;
        z = 1;

        for(i = 1; i <= x; i++)
            {
                for(j=1; j<=y; j++)
                    cout<<" ";
                    y--;

                for(j = 1; j <= (2 * i - 1); j++)
                    cout<< j ;
                    cout<<endl;
            }


            for(i = 1; i <= (x - 1); i++)
            {
                for(j = 1; j <= z; j++)
                    cout<<" ";
                    z++;

                for(j = 1; j<=(2 * (x - i) - 1); j++)
                    cout<< j;
                    cout<<endl;
            }

            cout<<endl;
            return 0;
        }