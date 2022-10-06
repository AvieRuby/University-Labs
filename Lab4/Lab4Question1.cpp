#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

struct Person
    {
        char name[50];
        int flavor;
    };

class ADTQueue
    {
        private:
            Person queue[SIZE];
            int head, tail;

        public:
            ADTQueue()
                {
                    tail = -1;
                    head = 0;
                }

            bool empty()
                {
                    if(head == tail+1)
                        return true;
                    else
                        return false;
                }

            bool full()
                {
                    if(tail == SIZE-1)
                        return true;
                    else
                        return false;
                }

            void append(Person pr)
                {
                    if (!full())
                        {
                            tail++;
                            queue[tail] = pr;
                        }
                    else
                        {
                            cout<<"Queue is Full"<<endl;
                            exit(EXIT_FAILURE);
                        }
                }

            Person serve()
                {
                    Person pr;
                        if(!empty())
                            {
                                pr = queue[head];
                                head++;
                                return pr;
                            }
                        else
                            {
                                cout<<"Queue is Empty"<<endl;
                                exit(EXIT_FAILURE);
                            }
                    }
    };

class Display
    {
        public:
        void personality()
            {
                cout << "Do you know that the flavor of ice-cream can reveal one's personality?" << endl << endl;
            }
    };

void addValue(Person pr)
    {
        Person P
    }


int main()
    {
        Display display;
        struct Person p , pr;
        ADTQueue q;

        display.personality();

        cout << "Enter name: " ;
        cin >> p.name;


        cout << "Enter favorite flavor: " << endl;
        cout << "(1=chocolate 2=vanilla 3=strawberry 4=mixed flavor)" << endl;
        cin >> p.flavor;

        q.append(pr.);








    }