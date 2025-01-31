# include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("meheravatara.txt","w+");
	fputs("jai meher baba",fp);
	//fseek(fp,16,0);
	//fputs("ki",fp);
	fclose(fp);
}