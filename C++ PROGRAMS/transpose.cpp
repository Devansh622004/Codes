# include<iostream>
using namespace std;

class matrix
{
	int a[3][3],b[3][3];
	
	public:
		void get();
		void show();
	    friend void trans(matrix m);
};
void matrix :: get()
{
	int i,j;
	cout<<"ENTER ELEMENTS OF MATRIX\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cin>>a[i][j];
		}
	}
}
void matrix :: show()
{
	int i,j;
	cout<<"ELEMENTS OF MATRIX ARE\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<a[i][j]<<endl;
		}
	}
}
void trans(matrix m)
{
	int i,j;
	cout<<"TRANSPOSED MATRIX IS :-"<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			m.b[i][j]=m.a[j][i];
			cout<<m.b[i][j]<<endl;
		}
	}
}
int main()
{
	matrix x;
	x.get();
	x.show();
	trans(x);
	
	return 0;
}