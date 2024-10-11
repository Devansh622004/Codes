# include<iostream>
using namespace std;

class posorneg
{
    int x;
    private:
        int check(); 

    public:
        int input(); 
        int result(); 
};

int posorneg :: input()
{
    cout<<"enter a no."<<endl;
    cin>>x;
    return 0;
}

int posorneg :: check()
{
    int flag=0;
    if(x>0)
    flag=1;
    else
    flag=0;
    return flag;
}

int posorneg :: result()
{
    if(check()==1)
    cout<<"GIVEN NO. IS POSITIVE\n";
    else
    cout<<"GIVEN NO. IS NEGATIVE\n";
    return 0;
}

int main()
{	
    posorneg n1;
    n1.input();
    n1.result();
return 0;
}