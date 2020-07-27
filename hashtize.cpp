#include<stdio.h>
int main()
{
	int i,j,count=0;
	char str[100],mask[100];
	scanf("%[^\n]s",str);
	
	for(j=0,i=0;str[i]!='\0';j++)
	{
		if(j%2==0){
		
		printf("%c",str[i]);
		i++;}.
		else
		printf("-");
	}
}
