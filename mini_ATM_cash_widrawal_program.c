
#include<stdio.h>
int main()
{

int val;
int choice;
int sum=1;

printf("enter the value\n");
scanf("%d",&val);

printf("enter choice of notes\n100,50,20,10");
scanf("%d",&choice);
if(val%10==0)
{
	switch(choice)
	{
		case 100 :	sum=val/100;
				 printf("100 notes * %d\n",sum);
				val =val%100;
		case 50 : 		sum=val/50;
				printf("50 notes * %d\n",sum);
				val =val%50;
		case 20 :               sum=val/20;
                                printf("20 notes * %d\n",sum);
                                val =val%20;
		case 10 :               sum=val/10;
                                printf("10 notes * %d\n",sum);
                                val =val%10;
	break;
		default :		printf("enter a valid choice\n");

	}
}
else
{
printf("enter a valid value\n");
}



return 0;

}


		
