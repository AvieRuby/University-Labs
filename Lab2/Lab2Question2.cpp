#include <iostream>

using namespace std;

class Box
    {
        public:
            int length , breadth , height ;

            Box ( int x , int y , int z );
    };

Box::Box ( int x , int y , int z )
    {
        length = x;
        breadth = y;
        height = z;
    }

int main()
    {
        Box Box1( 5 , 6 , 7 );
        Box Box2( 10 , 12 , 13 );


        cout << "Volume of Box 1: " << (Box1.length * Box1.breadth * Box1.height) << endl;
        cout << "Volume of Box 2: " << (Box2.length * Box2.breadth * Box2.height);
    }