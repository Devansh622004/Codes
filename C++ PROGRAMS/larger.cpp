# include<iostream>
using namespace std;

class big
{
	int a,b;
	public:
		void getdata();
		int larger();
		void display();
};

void big :: getdata()
{
	cout<<"ENTER TWO NO."<<endl;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
}

int big :: larger()
{
	int l;
	if(a>b)
	{
		l=0;
	}
	else
	{
		l=1;
	}
	return l;
}

void big :: display()
{
	int l;
	if(l==0)
	{
		cout<<"a IS LARGER.\n";
	}
	else
	{
		cout<<"b IS GREATER.\n";
	}
}

int main()
{
	big b;
	b.getdata();
	b.larger();
	b.display();
	
	return 0;
}

