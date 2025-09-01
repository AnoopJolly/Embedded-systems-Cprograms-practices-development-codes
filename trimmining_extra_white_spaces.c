#include<stdio.h>
#include<string.h>
int main()
{

	char ch[100];
	char ch1[100];
	int k=0;
	int i=0;
	printf("Enter the string\n");
	fgets(ch,sizeof(ch),stdin);
	ch[strcspn(ch,"\n")]='\0';

	while(ch[i]!='\0')
	{
		if(ch[i]!=' ')
		{
			ch1[k++]=ch[i];
		}
		else
		{
			ch1[k++]=' ';
			while(ch[i]==' ')
			{
				i++;
			}

		}
	i++;
	}
	ch1[k]='\0';

	printf("%s",ch1);

	return 0;
}


