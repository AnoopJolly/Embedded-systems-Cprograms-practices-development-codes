#include <stdio.h>

int main()
{
    int a,b,c;
    int temp;
    printf("enter the values for a & b");
    scanf("%d %d",&a,&b);
    
   a=a+b; //5+10
   b=a-b;  //15-10
   a=a-b; //15-5
   printf("%d %d",a,b);
    

    return 0;}
}