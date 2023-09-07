# include<iostream>
using namespace std;

void swap1(int,int);
void swap2(int &m,int &n);
void swap3(int *s,int *t);

int main()
{
	int a,b;
	cout<<"ENTER TWO NO.\n";
	cin>>a>>b;
	swap1(a,b);
	
	cout<<"ENTER TWO NO.\n";
	cin>>a>>b;
	
	swap2(a,b);
	cout<<a<<endl<<b<<endl;
	
	cout<<"ENTER TWO NO.\n";
	cin>>a>>b;
	
	swap3(&a,&b);
	cout<<a<<endl<<b;
	return 0;	
}

void swap1(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	cout<<x<<endl<<y<<endl;
}

void swap2(int &m,int &n)
{
	int t;
	t=m;
	m=n;
	n=t;
}

void swap3(int *s,int *t)
{
	int o;
	o=*s;
	*s=*t;
	*t=o;
}