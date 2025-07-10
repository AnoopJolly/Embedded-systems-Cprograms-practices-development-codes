#include <stdio.h>
int main()
{
int a[]={2,5,32,34};
int n1= sizeof(a)/sizeof(a[0]);

int b[]={90,80,70,60};
int n2 =sizeof(b)/sizeof(b[0]);

int c[n1+n2];

for(int i=0;i<n1;i++)
{
    c[i]=a[i];
}
for(int i=0;i<n2;i++)
{
    c[n1+i]=b[i];
}

for(int i=0;i<n1+n2;i++)
{
printf("%d  ",c[i]);
}
return 0;

}