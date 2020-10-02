//shubhendu enter the marks of 5 subject and caluclate percentage 29-01-2019
#include<conio.h>
int main()
{
	float s1,s2,s3,s4,s5,total,max,per;
	printf("Enter the marks of five subjects\n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,s5);
	printf("Enter Maximum Marks");
	scanf("%f",&max);
	total=s1+s2+s3+s4+s5;
	per=(total*100)/max;
	printf("Total=%f\n Percentage=%.2f",total,per);
	return 0;
}
