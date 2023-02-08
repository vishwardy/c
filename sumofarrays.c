//program arrays and sum of array values 
#include<stdio.h>
#define SIZE 5
int main()
{
	int a[SIZE],i,sum;
	printf("\n enter 5 values \n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n dispalying array values are");
	for(i=0;i<SIZE;i++)
	{
			printf("\n %d",a[i]);
	
	}
	sum=0;
	printf("\n SUMMING UP array values ");
	for(i=0;i<SIZE;i++)
	{
		sum=sum+a[i];
		printf("\t %d",sum);
	}
	printf("\n sum of array values =%d",sum);
	
}
