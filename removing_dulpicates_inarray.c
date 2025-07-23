#include<stdio.h>

int main()
{

int a[10];
int n=sizeof(a)/sizeof(a[0]);


printf("Enter 10 elements\n");
for(int i=0;i<n;i++) 
scanf("%d", &a[i]);


for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
}


printf("After removal of duplicates\n");
for(int i=0;i<n;i++)
printf("%d",a[i]);

return 0;

}



