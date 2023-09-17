/* CREATE A FUNCTION (HINT : MAKE IT A FRIEND FUNCTION) WHICH TAKES 2 POINTS
   OBJECTS & COMPUTES THE DISTANCE B/W THOSE 2 POINTS.

-->USE THESE EXAMPLES TO CHECK YOUR CODE:
1.) DISTANCE B/W (1,1) & (1,1) IS 0.
2.) DISTANCE B/W (0,1) & (0,6) IS 5.
3.) DISTANCE B/W (1,0) & (70,0) IS 69.
*/

#include <iostream>
#include <cmath>
using namespace std;

class dist
{
    int a, b;

    public: 
        dist(){}
        dist(int, int);
        void display();
        void calcu(dist o1, dist o2);
};

dist ::dist(int x,int y)
{
    a = x;
    b = y;
}

void dist :: display()
{
    cout<<"POINTS ARE : "<<"("<<a<<","<<b<<")";
}

void dist :: calcu(dist o1, dist o2)
{
    int x;
    x = sqrt(pow((o2.a - o1.a),2)  +  pow((o2.b - o1.b),2));

    cout<<"THE REQUIRED DISTANCE B/W ABOVE MENTIONED POINTS IS:  "<<x<<endl;
}

int main()
{
    dist d3;

    dist d1(1,0);
    d1.display();

    cout<<endl;

    dist d2 = dist(70,0);
    d2.display();

    cout<<endl;

    d3.calcu(d1, d2);

    return 0;
}