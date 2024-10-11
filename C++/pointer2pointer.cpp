# include<iostream>
using namespace std;
int main()
{	
    int *a,b = 5;
    a = &b;
    cout<<a;
    //(ADDRESS OF) OPERATOR
    cout<<&b;
    //(VALUE AT)  OR  (DEREFERENCE OPERATOR)
    cout<<*a;
    //POINTER TO POINTER
    int **p = &a;
    cout<<p<<endl;
    cout<<**p<<endl;
    cout<<&a<<endl;

return 0;
}