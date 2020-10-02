//Grade 05-03-19
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
if((per>90)||(per<100))
printf("Grade A");
else if((per>80)||(per<90))
printf("Grade B");
else if((per>60)||(per<80))
printf("Grade C");
else
printf("Grade D");
return 0;
}
