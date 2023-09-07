# include<iostream>
using namespace std;

class item
{
	static int count;
	
	public:
		void get()
		{
			count++;
		}
		
		static void display()
		{
			cout<<"THE NO. OF OBJECTS ARE:-"<<count;
		}
};

int item :: count;

int main()
{
	item i1,i2;
	i1.get();
	i2.get();
	
	item::display();
	return 0;
}