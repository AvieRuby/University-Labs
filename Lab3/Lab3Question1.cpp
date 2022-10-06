#include <iostream>
using namespace std;

const int SIZE = 5;

class ADTStack
    {
        private:
            char stack[SIZE];
            int topstack;

        public:
            ADTStack()
                {
                    topstack = -1;
                }

            bool empty()
                {
                    if(topstack == -1)
                        return true;
                    else
                        return false;
                }

            bool full()
                {
                    if(topstack == SIZE-1)
                        return true;
                    else
                        return false;
                }

            void push(char ch)
                {
                    if (!full())
                        {
                            topstack++;
                            stack[topstack] = ch;
                        }
                    else
                        {
                            cout<<"Stack is full"<<endl;
                            exit(EXIT_FAILURE);
                        }
                }

            char pop()
                {
                    char ch;
                    if(!empty())
                        {
                            ch = stack[topstack];
                            topstack--;
                            return ch;
                        }
                    else
                        {
                            cout<<"Stack is empty"<<endl;
                            exit(EXIT_FAILURE);
                        }
                    }

    };


int main()
    {
        ADTStack stack;

        char ch;

        cout << "Key in five characters: ";
        for (int i = 0; i < SIZE; i++)
            {
                cin >> ch;
                stack.push(ch);    
            }
        
        
        cout << "The reverse order is: ";
        for (int i = 0; i < SIZE; i++)
            {
                cout << stack.pop() << " ";
            } 

        return 0;
    }
