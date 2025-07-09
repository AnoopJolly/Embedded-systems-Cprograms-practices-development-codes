#include<stdio.h>

int main()
{ int num,reverse=0,remainder;

num=123321;
int start=num;
while(num!=0)
{

remainder=num%10;
reverse=reverse*10+remainder;
num=num/10;

}
if(start==reverse)
 printf("its a palindrome\n");
 else
 printf("its not palindrome\n");
printf("%d the reversed number is \n",reverse);


return 0;
}
