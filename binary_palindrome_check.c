#include<stdio.h>
#include<string.h>
void main()
{
	while(1)
	{
		int n;
		printf("Enter the numer\n");
		scanf("%d",&n);
		
		
		char d[100]={0};
		int k=0;
		int temp=n;
		while(temp>0)
		{
			d[k++]=temp%2+'0';
			temp/=2;
		}
		d[k]='\0';

		printf("%s\n",d);


		for(int i=0;i<k/2;i++)
		{
			char temp = d[i];
			d[i]=d[k-i-1];
			d[k-i-1]=temp;
		}
		printf("%s\n",d);
		
		int s=strlen(d);
		int ispalindrome=0;
		for(int i=0,j=k-1;i<s && j>0;i++,j--)
		{
			if(d[i]==d[j])
			{
				ispalindrome=1;
			}
			else
			{
				ispalindrome=0;
				break;
			}
		}

		if(ispalindrome)
		{
			printf("Palindrome\n");
		}
		else
		{
			printf("Not palindrome\n");
		}

		
	}
}
