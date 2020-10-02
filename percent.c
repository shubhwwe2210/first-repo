//Shubhendu 29-01-2019 Percentage Marks
#include<stdio.h>
#include<conio.h>
int main()
{
	float s1,s2,s3,s4,s5,max,total,per;
	printf("Enter The marks subject 1.\t");
scanf("%f",&s1);
printf("Enter The marks of subject 2.\t");
scanf("%f",&s2);
printf("Enter The Marks of Subject 3.\t");
scanf("%f",&s3);
printf("Enter The marks of Subject 4.\t");
scanf("%f",&s4);
printf("Enter the marks of subject 5.\t");
scanf("%f",&s5);
printf("Enter the maximum marks");
scanf("%f",&max);
total=s1+s2+s3+s4+s5;
per=(total*100)/max;
printf("Total Marks=%f\n percentage=%.2f",total,per);
return 0;
}


