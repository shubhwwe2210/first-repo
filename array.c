//print the elements of an array
#include<stdio.h>
int main()
{
	int n,m,i,j;
	int a[n][m];
	printf("Enter the no. of rows and column");
	scanf("%d%d",&n,&m);
	printf("Enter the elements of an array");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("/n");
	}
	return 0;
}
