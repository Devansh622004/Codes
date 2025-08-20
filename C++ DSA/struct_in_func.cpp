# include <iostream>
using namespace std;

struct Rectangle{
    int l;
    int b;
};

struct Rectangle *func()
{
    struct Rectangle *p;
    p = new Rectangle;

    p->l = 20;
    p->b = 40;
    return p;
}

int main(){
    struct Rectangle *ptr = func();
    cout<<"LENGHT:- "<<ptr->l<<"\t"<< "BREADTH:- "<<ptr->b;
}