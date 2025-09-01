#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	char ch1[100][100];
	

	printf("Enter the string 1\n");
	fgets(ch,sizeof(ch),stdin);
	ch[strcspn(ch,"\n")]='\0';

	int i=0;
	int m=0;
	int k=0;
	int count=0;
	int l=0;
	while(ch[i]!='\0')
	{
			
		if(ch[i]!=' ' )
		{
			ch1[m][k++]=ch[i];
		}
		else
		{
			ch1[m][k]='\0';
			m++;
			k=0;
		}
		i++;
	}
	ch1[m][k]='\0';
	int wordcount=m;

	for(int i=m;i>=0;i--)
	printf(" %s",ch1[i]);

	return 0;
}



