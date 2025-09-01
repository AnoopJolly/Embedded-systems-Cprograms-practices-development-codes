#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	char ch1[100];
	char ch2[100];
	int i=0,q=0,k=0,l=0,start=0,end;
	printf("Enter the string\n");
	fgets(ch,sizeof(ch),stdin);
	ch[strcspn(ch,"\n")]='\0';

	while(ch[start]==' ')
	{
		start++;
	}

	for(int i=start;ch[i]!='\0';i++)
	{
		ch1[k++]=ch[i];
	}
	ch1[k]='\0';
	printf("after removing leading white spaces\n");
	printf("%s",ch1);


	end=strlen(ch)-1;

	while(end>start && ch[end]==' ')
	{
		end--;
	}
	for(int j=0;j<=end;j++)
	{
		ch2[l++]=ch[j];
	}
	ch2[l]='\0';
	printf("After removing trailing white spaces\n");
	printf("%s",ch2);

	return 0;
}
	


		
