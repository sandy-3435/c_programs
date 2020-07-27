#include<stdio.h>
int main()
{
int num,i,a[100],rem,count=0;
scanf("%d",&num);
i=0;
while(num!=0)
{
	rem=num%10;
	a[i]=rem;
	num=num/10;
	i++;
	count++;
}
for(i=count;i>0;i++)
{
	printf("%d",a[count]);
}
return(0);
}


