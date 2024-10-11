# include<iostream>
using namespace std;

class item
{
	const m=50;
	int itemcode[m];
	int itemprice[m];
	int count;
	public:
		void counter()
		{
			count=0;
		}
		int getdata();
		int display();
};

int item:: getdata()
{
	cout<<"ENTER ITEM CODE\n";
	cin>>itemcode[count];
	cout<<"ENTER ITEM PRICE\n";
	cin>>itemprice[count];	
	count++;
	return 0;
}

int item:: display()
{
	for(int i = 0;i < count;i++)
	{
		cout<<itemcode[i];
		cout<<itemprice[i];
	}
	return 0;
}

int main()
{
    item i;
    i.getdata();
    i.display();
    return 0;
}