#include <iostream>

using namespace std;

class BMI
    {
        private:
            float height = 1 , weight = 1 , bmi;
        
        public:
            void set(float x , float y)
                {
                    height = x;
                    weight = y;
                }

            void calculate()
                {
                   bmi = (weight / (height * height));
                }

            void display()
                {
                    cout << "Your bmi is: " << bmi << endl;

                    if (bmi < 18.5)
                        {
                            cout << "You are underweight.";
                        }
                    else if (bmi >= 18.5 && bmi <= 24.9)
                        {
                            cout << "You are normal.";
                        }
                    else if (bmi >= 25 && bmi <= 29.9)
                        {
                            cout << "You are overweight.";
                        }
                    else if (bmi > 29.9)
                        {
                            cout << "You are obese.";
                        }
                    
                }
    };

int main()
    {
        float x , y;

        BMI bmi;

        cout << "This program will calculate your body mass index." << endl;
        cout << "Enter your height in meter(m) unit: ";
        cin >> x;
        cout << "Enter your weight in kilogram(kg) unit: ";
        cin >> y;

        bmi.set(x , y);
        bmi.calculate();
        bmi.display();

        return 0;
    }