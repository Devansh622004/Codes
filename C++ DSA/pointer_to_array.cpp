# include<iostream>
using namespace std;

int main()
{
    int A[3] = {1, 3, 7};
    int *p;
    p = A;

    for(int i = 0; i < 3; i++)
    {
        cout<< p[i]<<endl;
    }
return 0;
}