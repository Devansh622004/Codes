# include<iostream>
using namespace std;

class base
{
    int x;
    public:
            void get(int a)
            {
                x = a;
            }
            operator int()
            {
                return x;
            }
            void display()
            {
                cout << "THE VALUE OF x = "<< x;
            }
};

int main()
{
    base b;
    b.get(4);
    b.display();

    int x = b;
    cout<< "THE VALUE OF x is: "<< x;

return 0;
}