#include <iostream>
#include <math.h>
using namespace std;

class Standard_calculator
{
protected:
    float a, b, c;

public:
    void get_a_b()
    {
        cout << "ENTER TWO NUMBERS\n";
        cout << "NUM_1: ";
        cin >> a;
        cout << "NUM_2: ";
        cin >> b;
    }
    int ADD()
    {
        c = a + b;
        return c;
    }
    int SUB()
    {
        c = a - b;
        return c;
    }
    int MUL()
    {
        c = a * b;
        return c;
    }
    int DIV()
    {
        c = a / b;
        return c;
    }
    void result()
    {
        cout << c << endl;
    }
};

class Scientific_calculator
{
protected:
    float a, b, c;

public:
    void get_a()
    {
        cout << "ENTER A NUMBER\n";
        cout << "NUM: ";
        cin >> a;
    }
    int SIN()
    {
        return c = sin(a);
    }
    int COS()
    {
        return c = cos(a);
    }
    int TAN()
    {
        return c = tan(a);
    }
    int POWER()
    {
        int deg;
        cout << "ENTER THE DEGREE: ";
        cin >> deg;

        return c = pow(a, deg);
    }
    int LOG()
    {
        return c = log(a);
    }
    int LOG_10()
    {
        return c = log10(a);
    }
    int SQRT()
    {
        return c = sqrt(a);
    }
};

class Hybrid_Calculator : public Standard_calculator, public Scientific_calculator
{
public:
    int op;

    void operation()
    {
        cout << "ENTER A NO. B/W (1 - 11),\nWHERE ONE OPERATION IS ASSIGNED TO EACH NO. B/W(1 - 11):\n ";
        cout << "[1] -> ADD\n[2] -> SUB\n[3] -> MUL\n[4] -> DIV\n[5] -> SIN\n[6] -> COS\n[7] -> TAN\n[8] -> POWER\n[9] -> SQRT\n[10] -> LOG\n[11] -> LOG_10\n";
        cout << "CHOICE: ";
        cin >> op;
        if (op >= 1 && op <= 11)
        {
            switch (op)
            {
            case 1:
                get_a_b();
                ADD();
                result();
                break;
            case 2:
                get_a_b();
                SUB();
                result();
                break;
            case 3:
                get_a_b();
                MUL();
                result();
                break;
            case 4:
                get_a_b();
                DIV();
                result();
                break;
            case 5:
                get_a();
                SIN();
                result();
                break;
            case 6:
                get_a();
                COS();
                result();
                break;
            case 7:
                get_a();
                TAN();
                result();
                break;
            case 8:
                get_a();
                POWER();
                result();
                break;
            case 9:
                get_a();
                SQRT();
                result();
                break;
            case 10:
                get_a();
                LOG();
                result();
                break;
            case 11:
                get_a();
                LOG_10();
                result();
                break;
            default:
                cout << "ENTERED NUMBER IS NOT IN THE RANGE (1 - 11).\n";
                cout << "HENCE REENTER THE NUMBER.\n";
            }
        }
        else
        {
            cout << "ENTERED NUMBER IS NOT IN THE RANGE (1 - 11).\n";
        }
    }
};

int main()
{
    Hybrid_Calculator h;

    h.operation();

    return 0;
}