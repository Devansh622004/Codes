# include<stdio.h>
int main()
{
    float salary;
    printf("salary of an employee is :\n");
    scanf("%f", &salary);

    if(salary >= 250000 && salary <= 500000){
    printf("the tax imposed on salary is %f\n", salary/20);}

    if(salary > 500000 && salary <= 1000000){
    printf("the tax imposed on salary is %f\n", salary/5);}

    if(salary > 1000000){
    printf("the tax imposed on salary is %f\n", salary*0.3);}

    else
    {printf("there is no tax imposed on salary\n");}
    return 0;    
}