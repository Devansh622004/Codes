# include<iostream>
using namespace std;
int main()
{	
    int marks[]={4,5,6,7,8,9};
    int *p;
    p = marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    cout<<*(p+5)<<endl;

return 0;
}