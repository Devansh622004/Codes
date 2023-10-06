#include <stdio.h>
#include <string.h>

typedef struct contacts
{
    char name[20];
    char phno[20];
}person;

void main()
{
    person people[2];
    char n[20] = "meher";

    people[0].name[20] = "meher";
    people[0].phno[20] = "+91-8449914409";

    people[1].name[20] = "sai";
    people[1].phno[20] = "+91-8923221777";


    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, n) == 0)
        {
            printf("Phone Number: %s", people[i].phno);
        }
        //else
//        {
//        	printf("THIS CONTACT IS NOT EXIST\n");
//        	break;
//		}
}
	printf("THIS CONTACT IS NOT EXIST\n");
    return 1;
}