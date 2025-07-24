//sum of elements in each row of a matrix using loops and if-else statement


#include<stdio.h>

int main()
{

int a[3][3]={1,2,3, \
	  4,5,6,\
	  7,8,9};

int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<3;i++)
{  int sum=0;
	for(int j=0;j<3;j++)
	{
	   sum += a[i][j];
          }

	if(i==0)
	{
	printf("the sum of 1st row is %d \n",sum);
	}

	else if(i==1)
	{
	printf("the sum of 2nd row is %d \n",sum);
	}

	else if(i==2)
	{
	printf("the sum of 3rd row is %d\n",sum);
	}
	else
	{
	printf("the of %d row is %d \n",i+1,sum);
	}
}

return 0;

}

