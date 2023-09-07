# include<iostream>
using namespace std;

class book
{
    int price,pages;
    public:
        void get();
        void put();
};

void book :: get()
{
    cout<<"ENTER THE PRICE OF THE BOOK\nENTER THE PAGES OF THE BOOK\n";
    cin>>price>>pages;
}

void book :: put()
{
    cout<<"THE PRICE OF THE BOOK IS:-\t"<<price<<endl<<"THE PAGES OF THE BOOK ARE:-\t"<<pages<<endl;
}
  
int main()
{
    book devpub[4];
    int i;
    for(i=0;i<4;i++)
    {
        devpub[i].get();
        devpub[i].put();
    }
return 0;
}