
#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int b[]={6,7,8,9,10};
int n1=sizeof(a)/sizeof(a[0]);
int n2=sizeof(b)/sizeof(b[0]);

int *aptr=a;

int *bptr=b;

int temp;

for(int i=0;i<=n1;i++){
temp=*(aptr+i);
*(aptr+i)=*(bptr+i);
*(bptr+i)=temp;
}


for(int i=0;i<n1;i++)
{
printf("%d ",*(aptr+i));
}

printf("\n");

for(int j=0;j<n2;j++)
{
printf("%d ",*(bptr+j));
}
printf("\n");
return 0;

}
