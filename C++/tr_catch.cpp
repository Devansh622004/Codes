# include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<< "enter two no.";
    cin>> a>>b;
    try
    {
        if(b != 0)
        cout<<"result = "<< a/b;
        else{
            throw b;
        }
    }
    catch(int i)
    {
    cout << "EXCEPTION OCCURRED"<<i;
    }
    
return 0;
}