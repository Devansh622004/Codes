# include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
        void display();
        void sum(complex o1, complex o2);
        complex();                            // CONSTRUCTOR DECLARATION
};

complex :: complex()             /*DEFAULT CONSTRUCTORS(TAKES NO ARGU.) &&
                                  CONSTRUCTOR DEFINATION */
{
    a = 2;
    b = 4;
}

void complex :: display()
{
    cout<<"THE COMPLEX NO. IS : "<<a<<"+"<<b<<"i";
}

void complex :: sum(complex o1, complex o2)   // PASSING OBJECTS AS FUNCTION ARGUMENTS
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}

int main()
{
    complex c1, c2, c3;

    c1.display();

    cout<<endl;


    c2.display();
    
    cout<<endl;
    
    c3.sum(c1,c2);                      
    c3.display();

    return 0;
}