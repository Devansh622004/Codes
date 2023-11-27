#include <iostream>
using namespace std;

class enclosing
{
public:
    class nested
    {
    private:
        int x;

    public:
        void get(int n)
        {
            x = n;
        }
        void putdata()
        {
            cout << "THE NO. IS:" << x << endl;
        }
    };
};

int main()
{
    enclosing ::nested o1;
    o1.get(7);
    o1.putdata();

    return 0;
}