//33 factorial usig while loop

#include<stdio.h>
int main()
{

	int n;

	printf("Enter the  number\n");
	scanf("%d",&n);

	int f=1;
	while(n>1)
	{
	f=f*n;
	n--;
	}
	printf("Factorial of the %d is %d\n",n,f);


return 0;
}


