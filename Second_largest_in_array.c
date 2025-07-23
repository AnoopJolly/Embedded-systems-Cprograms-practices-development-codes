#include<stdio.h>

int main()
{

int n;
int a[100];



printf("Enter the no of elements \n");
scanf("%d",&n);

printf("Enter the elements for tha array\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);


// duplicates removal
for(int i=0;i<n;i++)
{
        for(int j=i+1;j<n;j++)
                {
                        if(a[i]==a[j])
                                {       
                                        for(int k=j;k<n-1;k++)
                                        {
                                        a[k] = a[k+1];
                                        }
                                
                                n--;
				j--;

                                }
                }
}

printf("after duplicates removal\n");
for(int i=0;i<n;i++)
printf("%d",a[i]);


// bubble sorting

for(int i=0;i<n-1;i++)
{
	for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp= a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}

printf("\nafter sorting\n");
for(int i=0;i<n;i++)
printf("%d",a[i]);




printf("The second largest amoung the element is %d \n",a[n-2]);

return 0;

}


