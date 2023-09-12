// READ,DISPLAY & CALCULATE TOTAL MARKS OF STUDENTS.
# include<iostream>
# include<string.h>
using namespace std;

struct student
{
    int marks[10];
};

int main()
{
    int n;
    struct student a[50];
    cout<<"ENTER THE NO. OF STUDENTS\n";
    cin>>n;

    cout<<"ENTER THE MARKS OF STUDENTS\n";
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
    {
        cin>>a[i].marks[j];
    }
    }

return 0;
}