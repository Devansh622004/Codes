# include<iostream>
using namespace std;

class student
{
    static int count;
    int rollno;
    int fees;

    public:
            void getdata();
            void putdata();
    static void getcount()
    {
        cout<<"the value of count is"<<count<<endl;
    }
};

void getdata()
{
    cout<<"ENTER ROLLNO AND FEES";
    cin>>rollno>>fees;
    count++;
}

void putdata()
{
    cout<<"rollno and fees are-->"<<endl;
    cout<<rollno<<fees;
}

int main()
{	
    student rames,bijuria,kamles;
    rames.getdata();
    rames.putdata();
    student.getcount();

    bijuria.getdata();
    bijuria.putdata();
    student.getcount();

    kamles.getdata();
    kamles.putdata();
    student.getcount();
return 0;
}