//first structure program
#include<stdio.h>
struct student
{
	int roll;;
	char name[30];
	float marks;
}S[3];
int main()
{
	int i;
	printf("Enter the details");
	for(i=1;i<=3;i++)
	{
		scanf("%d%s%f",&S[i].roll,S[i].name,&S[i].marks);
	}
	for(i=1;i<=3;i++)
	{
		printf("\n%d\t%s\t%f",S[i].roll,S[i].name,S[i].marks);
	}
	return 0;
}

