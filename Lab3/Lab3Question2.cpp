#include <iostream>

using namespace std;

class ADTStack
    {
        private:
            int stack[10], topstack = 10, x = -1;

        public:
            void push(int num)
                {
                    x++;
                    stack[x]=num;
                }

            void pop()
                {
                    x--;
                }

            void display()
                {
                    int even = 0 , odd = 0;

                    for(int i = x; i>=0; i--)
                        {
                            if(stack[i]%2 ==0)
                                {
                                    even++;
                                }
                            else
                                {
                                    odd++;
                                }
                        }

                    cout << "There are " << even << " even numbers and " << odd << " odd numbers.";
                }
    };


int main()
    {
        ADTStack stack;
        int num;

        cout << "Key in 10 numbers: ";
        for (int i = 0; i < 10; i++)
            {
                cin >> num;
                stack.push(num);
            }
        
        stack.display();

        return 0;

    }

