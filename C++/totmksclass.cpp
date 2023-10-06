#include <iostream>
using namespace std;

class record
{
     int math, ds, c;
     int total;

public:
     void get();
     void show();
     void calculate();
};

void record ::get()
{
     cin >> math >> ds >> c;
}

void record ::show()
{
     cout << math << endl
          << ds << endl
          << c << endl;
}

void record ::calculate()
{
     cout << math + ds + c;
}

int main()
{
     record s1, s2, s3;
     cout << "ENTER THE MARKS OF 1ST STUDENT (OUT OF 80)\n";
     s1.get();

     cout << "ENTER THE MARKS OF 2ND STUDENT (OUT OF 100)\n";
     s2.get();

     cout << "ENTER THE MARKS OF 3RD STUDENT (OUT OF 100)\n";
     s3.get();

     cout << "THE MARKS OF 1ST STUDENT (OUT OF 100) ARE: ";
     s1.show();

     cout << "THE MARKS OF 2ND STUDENT (OUT OF 100) ARE: ";
     s2.show();

     cout << "THE MARKS OF 3RD STUDENT (OUT OF 100) ARE: ";
     s3.show();

     cout<<"TOTAL MARKS OF 1ST STUDENT (OUT OF 300) ARE: ";
     s1.calculate();
     cout<<endl;

     cout<<"TOTAL MARKS OF 2ND STUDENT (OUT OF 300) ARE: ";
     s2.calculate();
     cout<<endl;

     cout<<"TOTAL MARKS OF 3RD STUDENT (OUT OF 300) ARE: ";
     s3.calculate();
     cout<<endl;

     return 0;
}