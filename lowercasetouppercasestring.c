//to convert string to upper case

#include<stdio.h>
#include<string.h>

int main()
{

char ch[100];

printf("Enter the string\n");
fgets(ch,sizeof(ch),stdin);


size_t len= strlen(ch);
if(ch[len-1] == '\n')
ch[len-1] ='\0';

for(int i=0;ch[i] != '\0';i++)
	{
		if(ch[i] != ' ' && ch[i] != '\n' && ch[i] != '\t')
			{
				if(ch[i] >='a' && ch[i] <='z') 
					{ 
					ch[i]=ch[i]-32;
					}
			}
	}

printf("%s\n",ch);
return 0;

}

