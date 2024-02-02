# include<iostream>
using namespace std;

class B
{
    private:
            int a;
    public:
            int b;
            void setab()
            {
                cout<<"ENTER THE VALUES OF a and b\n";
                cin>>a>>b;
            }
            int geta()
            {
                return a;
            }
            void showa()
            {
                cout<<"THE VALUE OF a: "<<geta()<<endl;
            }
};

class D : private B
{
    private:
            int c;
    public:
            void mult()
            {
                setab();  // CHANGE
                c = geta() * b;
            }
            void display()
            {
                cout<<"a: "<<geta()<<endl; 
                cout<<"b: "<<b<<endl; 
                cout<<"c: "<<c<<endl; 
            }
};

int main()
{
    D d1;

    // d1.setab();     // WON'T WORK WHEN 'Private' IS USED.
    // d1.geta();      // WON'T WORK WHEN 'Private' IS USED.
    // d1.showa();     // WON'T WORK WHEN 'Private' IS USED.

    d1.mult();
    d1.display();

    // d1.b = 20;      // WON'T WORK WHEN 'Private' IS USED.
    // d1.display();   

    d1.mult();
    d1.display();    

return 0;
}