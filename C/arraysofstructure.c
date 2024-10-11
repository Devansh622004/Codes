# include<stdio.h>
# include<string.h>
struct book
{
	int pages;
	float price;
	char a[20];
};

void main()
{
	int n,i;
	struct book b[100];
	printf("enter the no. of books\n");
	scanf("%d", &n);
	printf("enter %d book's pages,price,name\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%f%s",&b[i].pages,b[i].price,b[i].a);
	}
	printf("pages\t\tprice\t\tname\n");
	for(i=0;i<n;i++)
	{
		printf("%d%f%s",b[i].pages,b[i].price,b[i].a);
	}
}