# include<iostream>
using namespace std;

void test(int x)
{
    try
    {
        if(x == 1) throw x;               // int
        else if(x == 0) throw 'x';        // char
        else if(x == -1) throw 1.0;       // double

        cout<< "END OF TRY BLOCK.\n";
    }

    catch(...)                            // CATCH ALL
    {
        cout<< "CAUGHT AN EXCEPTION.\n";
    } 
}

int main()
{
    cout<< "TESTING GENERIC CATCH\n";
    test(1);

    test(0);

    test(-1);

return 0;
}