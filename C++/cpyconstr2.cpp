#include <iostream>
using namespace std;

class code
{
    int id;

public:
    code() {}
    code(int a) { id = a; }
    code(code &x)                                   // COPY CONSTRUCTOR
    {
        id = x.id;
    }

    void display() { cout << id; }
};

int main()
{
    code A(100);
    code B(A);
    code C = A;
    code D;
    D = A;

    A.display();
    cout << endl;
    B.display();
    cout << endl;
    C.display();
    cout << endl;
    D.display();
    cout << endl;

    return 0;
}