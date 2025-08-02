

#include<stdio.h>

int ddelete(int *p, int *s,int pos);

int main()
{


int a[]={1,2,3,4,5,6,7,3,2,7,9,4,9,4,68,99};
int n=sizeof(a)/sizeof(a[0]);

printf("Below showing the elements present in the array\n\n Now give the postion to delete/n postion starts from 0\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);



int *nptr;
nptr=&n;
int pos;
printf("enter the position:");
scanf("%d",&pos);

ddelete(a,nptr,pos);



}

int ddelete(int *p, int *s,int pos)
{


for(int i=pos;i<*s-1;i++)
{
	if(i==pos)
	{
	p[i] =p[i+1];
	}
}
	(*s)--;


for(int i=0;i<*s;i++)
printf("%d ",p[i]);

}

