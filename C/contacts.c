#include <stdio.h>
#include <string.h>

struct contacts
{
    char name[20];
    char phno[20];
};

void main()
{
    struct contacts people[2];
    char n[20];

    people[0].name[20] = "meher";
    people[0].phno[20] = "+91-8449914409";

    people[1].name[20] = "sai";
    people[1].phno[20] = "+91-8923221777";
    
    printf("SEARCH BOX: ");
    gets(n);

//	int temp = strcmp(people[i].name, n);
    for (int i = 0; i < 2; i++)
    {
    	int temp = strcmp(people[i].name, n);
    	printf("%d", temp);
        if (strcmp(people[i].name, n) == 0)
        {
            printf("Phone Number: %s", people[i].phno);
        }
	}
	printf("THIS CONTACT IS NOT EXIST\n");
    return 1;
}