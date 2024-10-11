# include<iostream>
# include<iomanip>
int a = 5;          // GLOBAL VARIABLES
int main()
{
    int a = 10;
    std :: cout<<a<<"\n";
    std :: cout<<::a<<"\n";
    return 0;
}