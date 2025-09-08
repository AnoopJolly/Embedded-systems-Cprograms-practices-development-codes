#include<stdio.h>
#include<string.h>
int main()
{
	char filename[100];
	char content[100];
	printf("Enter the file name\n");
	scanf("%s",filename);

	FILE *fp;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("Error file not found\n");
			return 1;
	}
	int i=0,k=0;
	char string[100];
	printf("Enter the string to find\n");
	scanf("%s",string);
	char ch[100];
	int linenumber=1;
	while((fgets(content,sizeof(content),fp))!=NULL)
	{
		linenumber++;
		if(strstr(content,string)!=NULL)
		{
			printf("present in line number %d \n",linenumber);
		}		
	}

	fclose(fp);
	return 0;
}
