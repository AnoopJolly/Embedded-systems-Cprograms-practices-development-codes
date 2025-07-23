#include<stdio.h>
int main()

{

int a[100];
int n;
printf("Enter the no of elemets\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);

for(int i=0;i<n-1;i++)
	{
	for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int c=a[j];
				a[j]= a[j+1];
				a[j+1]=c;
			}
		}
	}

printf("after ordered to descending\n ");
for(int i=0;i<n;i++)
printf("%d",a[i]);

return 0;

}
