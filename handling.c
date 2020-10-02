//file handling read and display content of the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fb;
	char C;
	fp=fopen("C:\Users\shubham\Desktop\shub.txt","r");
	if(fp==Null)
	{
		printf("File not found");
		exit(0);
	}
	C=fgetc(fp);
	while(C!=EOF)
	{
		printf("%c",C);
		C=fget(fp);
	}
	fclose(fp);
	return 0;
}
