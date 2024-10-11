# include<iostream>
using namespace std;

class binary
{
    string x;
    public:
            void input();
            void chk_bin();
            void complement();
            void display();
};

void binary :: input()
{
    cout<<"enter a no.\n";
    cin>>x;
}

void binary :: chk_bin()
{
    for(int i=0 ; i < x.length() ; i++)
    {
        if(x.at(i)!='0'  && x.at(i)!='1')
       {
        cout<<"not binary"<<endl;
        exit(0);
       }
    }
}

void binary :: complement()
{
    for(int i = 0 ; i < x.length() ; i++)
    {
        if(x.at(i)=='0')
        {
            x.at(i) ='1';
        }
        else
        {
            x.at(i) ='0';
        }
    }
}
void binary :: display()
{
	cout<<"displaying your binary no."<<endl;
    for(int i = 0 ; i < x.length() ; i++)
    {
	cout<<x.at(i);
	}
}

int main()
{	
    binary b1;
    b1.input();
    b1.chk_bin();
    b1.complement();
    b1.display();
    return 0;
}