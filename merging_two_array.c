// merging two arrays

int a[]={1,2,3,4,5};
int b[]={6,7,8,9,10};

int n1=sizeof(a)/sizeof(a[0]);
int n2=sizeof(b)/sizeof(b[0]);

int c[n1+n2];
int n3=sizeof(c)/sizeof(c[0]);
for(int i=0;i<n1;i++)
{
    c[i]=a[i];
}
for(int i=0;i<n2;i++)
{
    c[n1+i]=b[i];
}
for(int i=0;i<n3;i++)
printf("%d  ",c[i]);

return 0;
}

