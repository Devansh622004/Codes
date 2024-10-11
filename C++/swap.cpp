# include<iostream>
using namespace std;

void swap(int,int);
void swapref(int *m,int *n);
void swappoint(int &s,int &t);
int main()
{
	int a,b;
	cout<<"enter two no."<<endl;
	cin>>a>>b;
	cout<<"after swapping:\n";
	swap(a,b);
	
	cout<<"\nagain enter two no."<<endl;
	cin>>a>>b;
    swapref(&a,&b);
    cout<<"after swapping by using call by reference\n";
    cout<<a<<endl<<b;
    
    cout<<"\nagain enter two no."<<endl;
	cin>>a>>b;
    swappoint(a,b);
    cout<<"after swapping by using call by pointer\n";
    cout<<a<<endl<<b;
	return 0;
}
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	cout<<x<<endl<<y;
}

void swapref(int *m,int *n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}

void swappoint(int &s,int &t)
{
	int num;
	num=s;
	s=t;
	t=num;
}



