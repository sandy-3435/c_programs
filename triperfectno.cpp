#include<stdio.h>
int main()
{
	int num,i,sum=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	//	printf("%d\n",sum);
	}
	if(sum==(3*num))
	{
		printf("it is tri perfect number");
	}
}