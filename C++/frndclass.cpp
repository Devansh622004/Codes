# include<iostream>
using namespace std;

class square;
class rectangle
{
    int l, b;
    public:
            rectangle()
            {
                l = 50;
                b = 2;
            }
    friend class square;  // FRIEND CLASS
};

class square
{
    int s;
    public:
            square()
            {
                s = 4;
            }
            void display(rectangle r)
            {
                cout<<"length: "<<r.l;
                cout<<"breadth: "<<r.b;
                cout<<"side: "<<s;
            }
};

int main()
{
    rectangle r;
    square s;
    s.display(r);
return 0;
}