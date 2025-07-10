// Prime number 1-N
#include <stdio.h>

int main()
{
    
    int num,i,isprime=1;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num<2){
        isprime=0;
    }else{
    for(i=2;i<=num/2;i++){
        if(num%i==0)
        {isprime=0;
         break;
             }
    }
    }
    if(isprime==0)
    printf("not prime\n");
    else
    printf("prime\n");
    
    return 0;
}

