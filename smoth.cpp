#include<stdio.h>
int main()
{
	int num,i,soft;
	scanf("%d%d",&num,&soft);
	while(num%2==0)
	{
		num=num/2;
		if(soft>2)
		{
			printf("it is smooth not");
		}
	
	}
	for(i=3;i<=num;i+2,printf("\n"))
	{
		while(num%i==0)
		{
			num=num/i;
			
			
			
		}
		if(soft>i)
		{
			printf("it is not a soft number");
		}
	}
}
