# include <stdio.h>
int main()
{
    int m,p,c;
    float average;
    printf("enter the marks of m\n");
    scanf("%d", &m);

    printf("enter the marks of p\n");
    scanf("%d", &p);

    printf("enter the marks of c\n");
    scanf("%d", &c);
    
    average = (m+p+c)/3;

    if((m >= 33 && p >= 33 && c >=33) || average >= 40)
    {
        printf("student passes the exam\n");
    }
    else
    {
        printf("student failled in the exam\n");
    }
    return 0;
    }
    