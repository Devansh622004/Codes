# include <stdio.h>

int main()
{
    int age;
    printf("Enter the number\n");
    scanf("%d", &age);

    if((age <= 90 && age >=17))
    {
        printf("you are  allowed to drive a car\n");
    }
    else
    {
        printf("you are not allowed to drive a car\n");
    }
    return 0;

}
