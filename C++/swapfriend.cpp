//    wap to swap private data of two different classes using friend function.

# include<iostream>
using namespace std;

class second;
class first
{
    private:
            int a;
    public:
            void get()
            {
                cout<<"ENTER TWO NO.\n";
                cin>>a;
            }
            void display()
            {
                cout<<"THE NO. IS :-\n"<<a;
            }
            friend void swap( first, second);
};

class second
{
    private:
            int b;
    public:
            void get()
            {
                cout<<"ENTER TWO NO.\n";
                cin>>b;
            }
            void display()
            {
                cout<<"THE NO. IS :-\n"<<b;
            }
            friend void swap( first , second );
};

    void swap(first f1, second s1)
{
    int t;
    t=f1.a;
    f1.a=s1.b;
    s1.b=t;
    cout<<f1.a<<endl<<s1.b;
}

int main()
{
    first p;
    second q;

    p.get();
    p.display();

    q.get();
    q.display();

    swap(p,q);
return 0;
}