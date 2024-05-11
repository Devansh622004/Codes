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
    catch(char c)
    {
        cout<< "CAUGHT A CHARACTER\n";
    }
    catch(int i)
    {
        cout<< "CAUGHT AN INTEGER\n";
    }
    catch(double d)
    {
        cout<< "CAUGHT A DOUBLE\n";
    }
    cout << "END OF TRY-CAUGHT SYSTEM.\n"; 
}

int main()
{
    cout<< "TESTING MULTIPLE CATCHES\n";
    cout<< "x == 1\n";
    test(1);

    cout<< "x == 0\n";
    test(0);

    cout<< "x == -1\n";
    test(-1);

    cout<< "x == 5\n";
    test(5);


return 0;
}