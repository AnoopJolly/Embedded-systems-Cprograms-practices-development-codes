#include<stdio.h>

int main()
{ int a,b,n;
    

    
    
    printf("Enter Value  A ");
    scanf("%d",&a);
    
        printf("Choose the opperation\n press 1-for addition \n press 2 for substraction \n press 3 for division \n press 4 for multiplication");
        scanf("%d",&n);
    
    
    printf("Enter Value  B ");
    scanf("%d",&b);
    
    
    switch(n)
    {
        case 1:
        
            printf("%d + %d = %d \n",a,b,a+b);
            break;
        
        case 2:
        
            printf("%d - %d = %d \n",a,b,a-b);
            break;
        
        case 3:
        
            printf("%d / %d = %d \n",a,b,a/b);
            break;
        
        case 4:
        
            printf("%d * %d = %d \n",a,b,a*b);
            break;
        
    }
    return 0;
}

