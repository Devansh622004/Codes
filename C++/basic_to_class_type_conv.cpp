# include<iostream>
using namespace std;

class A
{
    int hr, min;
    public:
            A(int t)
            {
                hr = t/60;
                min = t%60;
            }
            void show()
            {
                cout << "hr = "<<hr<<endl;
                cout << "min = "<<min;
            }
};

int main()
{
    A x(100);
    int dur = 85;
    x = dur;
    x.show();
return 0;
}