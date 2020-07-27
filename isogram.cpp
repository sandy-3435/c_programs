#include<stdio.h>
int main()
{
	int ind,i,count[27]={0},number=0;
	char str[100];
	scanf("[^\n]s",str);
	for(ind=0;str[ind]!='\0';ind++)
	{
		if(str[ind]>='a'&&str[ind]<='z' || str[ind]>='A'&&str[ind]<='Z')
		{
			count[str[ind]-'a']++;
			number++;
		}
	
	}
		printf("%d",number);
	for(ind=0;ind<number;ind++)
	{
	if(count[ind]>1)
	
	{
		printf("it is not");
		}	
	if(count[ind]=1)
	{
		printf("yes it is");
	}
	}
	
}
