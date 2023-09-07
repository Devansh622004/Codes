# include<iostream>
using namespace std;

class complex
{
    int a,b;
    public :
        void get(int m,int n)
        {
            a = m;
            b = n;
        }
        void sum(complex o1,complex o2)
        {
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void put()
        {
            cout<<"THE COMPLEX NO. IS :-\t"<<a<<"+"<<b<<"i"<<endl;
        }
};

int main()
{
    complex c1 ,c2,c3;
    c1.get(1,2);
    c1.put();

    c2.get(2,3);
    c2.put();

	c3.sum(c1,c2);
	c3.put();
return 0;
}