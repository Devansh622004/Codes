# include<iostream>
using namespace std;

inline int sum(int a,int b)            // IT SAVES TIME.
{
    return a+b;
}
int main()
{	
    int x=5,y=3;
    cout<<sum(x,y);
return 0;
}