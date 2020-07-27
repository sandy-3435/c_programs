#include<stdio.h>
int main()
{
	int n,i,j;
	char arr[50][50];
	scanf("%d",&n);
	printf("he entered number is :%d",n);
	for(i=1;i<=n;i++,printf("\n"))
	
	{
		for(j=1;j<=i;j++)
		{
			scanf("%c",&
			arr[i][j]);
		}
	}
	for(i=0;i<=n;i++)
	{
	 printf("%c",arr[i][j]);
	}
}
