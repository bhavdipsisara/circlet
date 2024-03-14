#include<stdio.h>

int main()

{
	int i,j,k=1;
	
	for(i=11;i<=25;i++)
	{
		for(j=i;j<=1;j++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}
}