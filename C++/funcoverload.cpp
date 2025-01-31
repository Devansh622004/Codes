# include<iostream>
using namespace std;
    int sum(float a,int b)
    {
        return a+b;
    }
    int sum(int a,int b,int c)
    {
        return a+b+c;
    }
    // VOLUME OF CYLINDER
    int volume(double r,int h)
    {
        return 3.14*r*r*h;
    }
    // VOLUME OF Cube
    int volume(int a)
    {
        return a*a*a;
    }
    // VOLUME OF rectangular box
    int volume(int l,int b,int h)
    {
        return l*b*h;
    }
    int main()
    {
        cout<<sum(3,6)<<endl;
        cout<<sum(3,7,6)<<endl;
        cout<<volume(3,6)<<endl;
        cout<<volume(3)<<endl;
        cout<<volume(3,7,6)<<endl;
    return 0;
     }
