#include <stdio.h>
int main()
{
int a[]={4,6,8,23,5,1,9,34,1,2,456,6,89,9};
int n = sizeof(a) / sizeof(a[0]);


int max =a[0];
int min =a[0];

for(int i=0;i<n;i++){
    if(a[i]>max)
     max=a[i];
    if(a[i]<min)
    min=a[i];
        
    }
printf("largest element is max %d\n",max);
printf("smallest element is min %d",min);

    return 0;
}

