//file handling read and display content of the file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fb;
	char d;
	fb=fopen("C:\\Users\\shubham\\Desktop\\shub.txt","r");
	if(fb==NULL)
	{
		printf("File not found");
		exit(0);
	}
	d=fgetc(fb);
	while(d!=EOF)
	{
		printf("%c",d);
		d=fgetc(fb);
	}
	fclose(fb);
	return 0;
}
