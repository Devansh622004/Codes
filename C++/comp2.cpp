# include<iostream>
using namespace std;

class complex
{
    int a, b;
    public: 
        complex(){}                            // CONSTRUCTOR DECLARATION
        complex(int x, int y)
        {
            a = x;
            b = y;
        }                            // CONSTRUCTOR DECLARATION
        
        complex sum(complex o1, complex o2);
        void display()
       { 
        cout<<"THE COMPLEX NO. IS : "<<a<<"+i"<<b;
       }
};

complex complex :: sum(complex o1, complex o2)
{
    complex c3;
    c3.a = o1.a + o2.a;
    c3.b = o1.b + o2.b;
    return c3;
}

int main()
{
    complex c1(2,3), c3;
    complex c2(3,4);

    
    c3.sum(c1,c2);                      
    c3.display();

    return 0;
}