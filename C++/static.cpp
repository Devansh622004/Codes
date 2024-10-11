# include<iostream>
using namespace std;

class item
{
    static int count;                   // DEFAULT VALUE IS 0.
    int code;
    int price;

    public:
        void input();
        void display(); 
};

int item :: count;                      // DEFINATION OF STATIC DATA MEMBER

void item::input()
{
    cout<<"ENTER ITEM CODE AND ITEM PRICE\n";
    cin>>code>>price;
    count++;
}

void item::display()
{
    cout<<"ITEM CODE , ITEM PRICEAND ITEM NO. ARE\n";
    cout<<code<<"\t||"<<price<<"\t||"<<count<<"\n";
}

int main()
{	
    item bottle,shampoo,soap;
    bottle.input();
    bottle.display();
    
    shampoo.input();
    shampoo.display();
    
    soap.input();
    soap.display();
    
return 0;
}