   // OOP  - CLASSES AND OBJECT
    // C++ --> INITIALLY CALLED --> C WITH CLASSES BY STROUSTROUP
    // CLASS --> EXTENTION OF STRUCTURES (IN C)
    // STRUCTURES HAD LIMITATIONS
    //     - MEMBERS ARE PUBLIC
    //     - NO METHODS
    // CLASSES --> STRUCTURES + MORE
    // CLASSES --> CAN HAVE METHODS AND PROPERTIES
    // CLASSES --> CAN MAKE FEW MEMBERS AS PRIVATE AND FEW AS PUBLIC
    // STRUCTURE IN C++ ARE TYPEDEFED
    // YOU CAN DECLARE OBJECTS ALONG WITH THE CLASS DECLARATION LIKE THIS :-
    /* CLASS EMPLOYEE
    {
        // CLASS DEFINATION;
    }harry,rohan,lovish;  */
    //harry.salary = 8    // makes no sense if salary is private 

    //NESTING OF MEMBER FUNCTIONS

# include<iostream> 
# include<string.h>
using namespace std;

class binary
{
    string s;
    
    public : 
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary :: read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void)
{
    for(int i = 0; i < s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}

    void binary :: ones_compliment(void)
    {
        chk_bin();                      //  ------>  NESTING OF MEMBER FUNCTIONS.
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i)='1';
            }
            else
            {
                s.at(i)='0';
            }
        }
    }
    void binary :: display(void)
    {
        cout<<"displaying your binaru number"<<endl;
        for(int i=0;i<s.length();i++)
        {
            cout<<s.at(i);
        }
        cout<<endl;
    }
int main(){
 
    binary b;
    b.read(); 
    b.chk_bin();
    // b.ones_compliment();
    b.display();
return 0;
}