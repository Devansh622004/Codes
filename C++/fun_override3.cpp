# include<iostream>
using namespace std;

class A
{
    public:
            void display()
            {
                cout<< "***********JAI MEHER BABA KI************";
            }
};

class B: public A
{
    public:
            void display()
            {
                cout<< "***********JAI SHREE RAM************";
            }
};

int main()
{
    B obj;
    obj.A::display();

return 0;
}