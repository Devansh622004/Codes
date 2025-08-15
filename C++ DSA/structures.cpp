# include <iostream>
using namespace std;

struct rectangle
{
    int l;
    int b;
};   

// OR

// struct rectangle
// {
//     int l;
//     int b;
// } r1, r2, ..., n;          (GLOBAL VARIABLE)STRUCT VARIABLES CAN ALSO BE DECLARED LIKE THIS.

// OR

// struct rectangle r;

// OR

int main(){
    struct rectangle r;

    r.l = 10;
    r.b = 20;

    cout<< "THE AREA OF rectangle IS: " << r.l * r.b;
    return 0;
}