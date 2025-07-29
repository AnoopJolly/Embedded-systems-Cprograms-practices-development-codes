
#include<stdio.h>
int main()
{
int val;
printf("Enter the decimal value to be converted \n");
scanf("%d",&val);
int a[16]={0};
int i=0;
while(val>0)
{
	a[i]=val%2;
	val=val/2;
	i++;
}
int j;
for(j=15;j>=0;j--)
{
printf("%d ",a[j]);
}

return 0;

}
