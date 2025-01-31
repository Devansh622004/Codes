# include<iostream>
# include<string.h>
using namespace std;
int main()
{	
    char a[20];
    int i,l;
    cout<<"ENTER A STRING\n";
    cin>>a;
    cout<<a<<endl;

    l=strlen(a);
    cout<<l<<endl;

    for(i=l-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    cout<<endl;
return 0;
}