#include<stdio.h>
int main()
{
	int arr[100],n,i,j,k,min;
	printf("Enter the no of elements");
	scanf("%d",&n);
	//array is given
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//array before sorting
	printf("\nBefore sorting: ");
	for(i=1;i<=n;i++)
	printf("%d ",arr[i]);
	//selecting sorting
	for(i=1;i<=n-1;i++)
	{
		min=i;
		for(j=i+1;j<=n;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		//swaping
		k=arr[min];
		arr[min]=arr[i];
		arr[i]=k;
	}
	//sorted array
	printf("\nafter sorting: ");
	
	for(i=1;i<=n;i++)
	printf("%d ",arr[i]);
}
