//43  sort an array of integers in ascending order


#include<stdio.h>

int main()
{


int n;
int a[100];
printf("enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements \n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);


int max=0;


for(int i=0;i<n-1;i++)
{
	for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			int c=a[j];
			a[j]= a[j+1];
			a[j+1]=c;
			}
		}
}

for(int i=0;i<n;i++)
printf("%d  ",a[i]);

return 0;

}



