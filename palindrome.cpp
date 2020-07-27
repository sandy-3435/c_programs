#include<stdio.h>
int main()
{
	int num,rem,rev=0,num1;
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("%d",rev);
	 if(rev==num1)
	{
		printf("this is palindrome");
	}
	else
	printf("it is not");
}
