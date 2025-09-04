#include<stdio.h>
void subarray(int a[])
{
	int n=sizeof(*a);
	int total_subarray=n*(n+1)/2;
	printf("the total number of subarray is %d \n",total_subarray);

	printf("All subarray\n");
	for(int start=0;start<n;start++)
	{
		for(int end=start;end<n;end++)
		{
			printf("{");
			for(int k=start;k<=end;k++)
			{
				printf("%d",a[k]);
			
			if(k<end)
				printf(",");
			}
			printf("}");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the subarray elemenys\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&*(a+i));
	}

	subarray(a);

	return 0;
}





