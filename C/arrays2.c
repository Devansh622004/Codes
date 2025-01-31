# include<stdio.h>
int main()
{
    int a[5],b,s=0;
printf("enter 5 no.\n");

for(b=0;b<5;b++)
{
    scanf("%d",a[b]);
}
for(b=0;b<5;b++)
{
    s=s+a[b];
}
printf("%d", s);
    return 0;

}