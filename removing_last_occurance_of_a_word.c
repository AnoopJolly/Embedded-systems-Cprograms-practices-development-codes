#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	char ch1[100];
	int pos=0;
	int k=0;
	int count=0;
	char w[10];
	int wc;
	int wordcount;
	printf("Enter the string\n");
	fgets(ch,sizeof(ch),stdin);
	ch[strcspn(ch,"\n")]='\0';
	printf("Enter the word\n");
	scanf("%s",w);
	int i=0;
	while(1)
	{

		if(ch[i]!=' '&& ch[i]!='\0')
		{
			ch1[k++]=ch[i];
			count++;
		}
		else
		{
			ch1[k]='\0';
			if(strcmp(ch1,w)==0)
			{
				wc=pos;
				
				wordcount=count;
			}
		
		pos=i+1;
		k=0;
			count=0;
			
		}
	if(ch[i]=='\0')
	break;
	i++;
	}

	for(int j=wc;ch[j]!='\0';j++)
                {
                        ch[j]=ch[j+wordcount];
                }
	printf("%s",ch);

	return 0;
}










