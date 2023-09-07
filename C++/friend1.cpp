# include<iostream>
using namespace std;

class swap2;
class swap1
{
	int a;
	public:
		void setvalue()
		{
			a=20;
		}
		void display()
		{
			cout<<a<<endl;
		}
		friend void swap(swap1 &,swap2 &);
};

class swap2
{
	int b;
	
	public:
		void setvalue()
		{
			b=30;
		}
		void display()
		{
			cout<<b<<endl;
		}
		friend void swap(swap1 &,swap2 &);
};

void swap(swap1 & m,swap2 & n)
{
	int t;
	t=m.a;
	m.a=n.b;
	n.b=t;
}

int main()
{
	swap1 s1;
	swap2 s2;
	
	s1.setvalue();
	s2.setvalue();
	
	s1.display();
	s2.display();
	
	swap(s1,s2);

	s1.display();
	s2.display();
	
	return 0;
}