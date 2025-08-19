# include <iostream>
using namespace std;

struct Rectangle{
    int l;
    int b;
};

void func(struct Rectangle r){
    cout<< "Length = "<< r.l <<endl<< "Breadth = "<< r.b<<endl;
}

int main(){
    struct Rectangle r = {10, 5};
    func(r);
}