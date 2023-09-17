# include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
        void get(int x, int y);
        void display();
        void sum();
};

void complex :: get(int x, int y)
{
    a = x;
    b = y;
}

void complex :: display()
{
    cout<<"THE COMPLEX NO. IS : "<<a<<"+"<<b<<"i";
}

int main()
{
    complex c1, c2;
    c1.get(1,2);
    c1.display();

    cout<<endl;

    c2.get(1,2);
    c2.display();
    
    return 0;
}