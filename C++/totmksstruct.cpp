#include <iostream>
using namespace std;

int read();
int display();
int calculate();

typedef struct record
{
    int math, ds, c;
    int total;
};

int main()
{
    record s1, s2, s3;
    cout << "ENTER THE MARKS OF 1ST STUDENT (OUT OF 80):" << endl;
    cin >> s1.math >> s1.ds >> s1.c;

    cout << "ENTER THE MARKS OF 2ND STUDENT (OUT OF 80):" << endl;
    cin >> s2.math >> s2.ds >> s2.c;

    cout << "ENTER THE MARKS OF 3RD STUDENT (OUT OF 80):" << endl;
    cin >> s3.math >> s3.ds >> s3.c;

    cout << "\nx-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n\n";

    cout << "MARKS OF 1ST STUDENT (OUT OF 80) ARE:\n"
         << s1.math << endl << s1.ds << endl << s1.c << endl;

    cout << "MARKS OF 2ND STUDENT (OUT OF 80) ARE:\n"
         << s2.math << endl << s2.ds << endl << s2.c << endl;

    cout << "MARKS OF 3RD STUDENT (OUT OF 80) ARE:\n"
         << s3.math << endl << s3.ds << endl << s3.c << endl;
         
         
    cout<<"TOTAL MARKS OF 1ST STUDENT (OUT OF 240) IS: "<<s1.math + s1.ds + s1.c << endl;
         
    cout<<"TOTAL MARKS OF 2ND STUDENT (OUT OF 240) IS: "<<s2.math + s2.ds + s2.c << endl;
    
    cout<<"TOTAL MARKS OF 3RD STUDENT (OUT OF 240) IS: "<<s3.math + s3.ds + s3.c << endl;


    return 0;
}