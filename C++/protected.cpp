# include<iostream>
using namespace std;

class school
{
    protected:
                int staff;
};

class college : public school 
{
    public:
            college(int s)
            {
                staff = s;
            }
            void put()
            {
                cout<<"staff"<<" "<<staff<<endl;
            }
};

int main()
{
    college c1(100);
    c1.put();

return 0;
}