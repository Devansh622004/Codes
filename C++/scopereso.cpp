# include<iostream>
using namespace std;
int m=10;

int main()
{
	int m=5;
	{
		int m=25;
		
		cout<<m<<endl;
		cout<<::m<<endl;
	}
	cout<<m<<endl;
	cout<<::m<<endl;
	return 0;
}