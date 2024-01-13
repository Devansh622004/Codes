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
                
            }
};

int main()
{
    B obj;
    obj.display();

return 0;
}