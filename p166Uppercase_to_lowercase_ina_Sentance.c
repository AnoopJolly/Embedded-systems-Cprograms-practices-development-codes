#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];

	printf("Enter the sentence\n");
	fgets(ch,sizeof(ch),stdin);
	ch[strcspn(ch,"\n")]='\0';


	for(int i=0;ch[i] != '\0';i++)
	{
	
		if((ch[i]>='a')&&(ch[i]<='z'))
			{
				ch[i]=ch[i]-32;
			}
		else if((ch[i]>='A')&&(ch[i]<='z'))
			{
				ch[i]=ch[i]+32;
			}
		
	}


	printf("\t%s",ch);
	return 0;
}

	

