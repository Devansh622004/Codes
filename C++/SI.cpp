# include<iostream>
using namespace std;

int SI(int p,int t,int r=3)
{
	return ((p*t*r)/100);
}

int main()
{
	int a,b;
	cout<<"ENTER PRINCIPLE AND TIME\n";
	cin>>a>>b;
	cout<<SI(a,b);
	return 0;	
} 