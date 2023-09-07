# include<iostream>
# include<cmath>
using namespace std;

class quadeq
{
	float D,a,b,c,r1,r2;
	
	public:
		void getdata();
		void roots();
};

void quadeq :: getdata()
{
	cout<<"ENTER VALUES OF a , b & c"<<endl;
	cin>>a>>b>>c;
}

void quadeq :: roots()
{
	D = b * b - 4 * a * c;
	if(D>0)
	{
		cout<<"THERE EXISTS REAL ROOTS\n";
		r1=(-b + sqrt(D) ) / ( 2 * a );
		r2=(-b - sqrt(D) ) / ( 2 * a );
		cout<<r1<<endl<<r2; 
	}
	
	else if(D==0)
	{
		cout<<"THERE EXISTS REAL AND EQUAL ROOTS\n";
		r1=-b / ( 2 * a );
		r1=r2;
		cout<<r1<<endl<<r2;
	}
	
	else
	{
		cout<<"THERE EXISTS IMAGINARY ROOTS\n";
	}
}

int main()
{
	quadeq q1;
	q1.getdata();
	q1.roots();
	return 0;
}