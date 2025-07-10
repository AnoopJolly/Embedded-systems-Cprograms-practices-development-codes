#include <stdio.h>
int main()
{
int a[]={4,6,8,23,5,1,9,34,1,2,456,6,89,9};
int n = sizeof(a) / sizeof(a[0]);

// buble sorting
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
    
// swaping without temp variable 
    a[j]=a[j]+a[j+1];
    a[j+1]=a[j]-a[j+1];
    a[j]=a[j]-a[j+1];
}
}
}
    for(int i=0;i<n;i++)
    printf("  %d",a[i]);
    return 0;
}

