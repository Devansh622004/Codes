#include <iostream>
using namespace std;

struct rectangle
{
    int l;
    int b;
};

void initialize(struct rectangle *r, int x, int y)
{
    r->l = x;
    r->b = y;
}

int area(struct rectangle r)
{
    return r.l * r.b;
}

void changelength(struct rectangle *r, int l)
{
    r->l = l;
}

int main(){
    struct rectangle r;

    initialize(&r, 10, 20);
    area(r);
    changelength(&r, 50);
}