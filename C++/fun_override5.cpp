// IF YOU WANT TO RUN FUNCTION OF BASE CLASS BY USING BASE CLASS.
// -->  BY USING POINTER.


// --> ALSO KNOWN AS RUN TIME POLYMORPHISM.


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
    A *ptr;
    B obj;

    ptr = &obj;
    ptr->display();
    // obj.A::display();

return 0;
}