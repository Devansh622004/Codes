# include<iostream>
using namespace std;

class call
{
    public:
            call()
            {
                cout<<"CONSTRUCTOR IS CALLED\n";
            }

            ~call()
            {
                cout<<"DESTRUCTOR IS CALLED\n";
            }
};

int main()
{
    call a;
    
return 0;
}