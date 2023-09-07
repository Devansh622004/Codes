# include<stdio.h>
void main()
{
	int ar[10],s,i,j,temp;
	printf("ENTER THE SIZE OF THE ARRAY\n");
	scanf("%d",&s);
	
	printf("ENTER THE ELEMENTS OF THE ARRAY\n");
	for(i=0;i<=s-1;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	printf("FOLLOWING ARE THE ELEMENTS OF ARRAY:-\n");
	for(i=0;i<s;i++)
	{
		printf("%d\n",ar[i]);
	}
	
	for(i=0;i<s;i++)
	{
		temp = ar[i];
		
		for(j=i-1;j>=0 && ar[j]>temp;j--)
		{
			ar[j+1]=ar[j];
		}
		ar[j+1]=temp;
	}
	
	printf("THE SORTED LIST\n");
	for(i=0;i<s;i++)
	{
		printf("%d\n",ar[i]);
	}
}