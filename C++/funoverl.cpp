# include<iostream>
using namespace std;

class over
{
    int a,l,b,s;
    float r;
    public:
        // void get();
        void area(int x, int y);
        void area(float d);
        void area(int e);
        void display();
};

// void over :: get()
// {
//     cout<<"ENTER THE LENGTH & BREADTH OF RECTANGLE, RADIUS OF CIRCLE & SIDE OF SQUARE\n";
//     cin>>l>>b>>r>>s;
// }

void over :: area(int x,int y)
{
    a = x * y;
}

void over :: area(float d)
{
    a = 3.14 * d * d;
}

void over :: area(int e)
{
    a = e * e;
}

void over :: display()
{
    cout<<a;
}

int main()
{
    over o;
    int l, b, s;
    float r;
    cout<<"ENTER THE LENGTH AND BREADTH OF RECTANGLE\n";
    cin>>l>>b;
    o.area(l, b);
    cout<<"AREA OF RECTANGLE IS:";
    o.display();

    cout<<"\nENTER THE RADIUS OF CIRCLE\n";
    cin>>r;
    o.area(r);
    cout<<"AREA OF CIRCLE IS:";
    o.display();

    cout<<"\nENTER THE SIDE OF SQUARE\n";
    cin>>s;
    o.area(s);
    cout<<"AREA OF SQUARE IS:";
    o.display();

return 0;
}