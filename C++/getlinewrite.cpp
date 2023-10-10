# include<iostream>
using namespace std;
int main()
{
    char str[20];

    cout<<"ENTER A STRING\n";
    cin.getline(str,20);

    cout<<"ENTRED STRING IS: ";
    cout.write(str,10);

return 0;
}