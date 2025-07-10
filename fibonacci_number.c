//Fibonacci Series

#include<stdio.h>

long long fibonacci(int n)
{
    if(n==0)
        return 0;
        else if (n==1)
        return 1;
    
    else
    return fibonacci(n-1)+fibonacci(n-2);
    
}

int main()
{ int num;
    printf("enter the number");
    scanf("%d",&num);
    
    if(num>=2){
        printf("the fibonacci number for %d is %lld ",num,fibonacci(num));}
        else{
        printf("fibonacci number not defined");
    }
    return 0;
}


