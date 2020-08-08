#include<stdio.h>
//sum of elements of an array
int sum(int *arr,int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	sum=sum+arr[i];
	return sum;
	
}
//sum of digits of a number
int sum_of_digits(int Sum)
{
	int rem,total=0;
	while(Sum!=0)
	{
		rem=Sum%10;
		total=total+rem;
		Sum=Sum/10;
	}
	return total;
}
//no of digits in a number
int n_digits(int Sum)
{
	int rem,count=0;
	while(Sum!=0)
	{
		rem=Sum%10;
		count++;
		Sum=Sum/10;
	}
	return count;
}

int main()
{
	int n;
	int arr[100];
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int Sum=sum(arr,n);
	//printf("%d",Sum);
	//printf("\n%d",sum_of_digits(Sum));
	int put=sum_of_digits(Sum);
	int temp=put;
	//loop is executed until sum of digits raises single digit total;
	while(n_digits(temp)!=1)
	temp=sum_of_digits(temp);
	
	printf("output %d",temp);
}
