# include<iostream>
using namespace std;
int main()
{	
    int i,tag=0;
    char s[20];
    cout<<"ENTER A STRING \n";
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        tag++;
    }
    cout<<"LENGTH"<<tag<<endl;
return 0;
}