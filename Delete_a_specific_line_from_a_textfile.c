#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	FILE *fp2;
	char filename[100];
	int linenumber;
	int line=1;
	printf("Enter the file name\n");
	scanf("%s",filename);
	getchar();
	printf("Enter the line number\n");
	scanf("%d",&linenumber);
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("Error file not exist \n");
	}
	char temp[100]="temp.txt";
	fp2=fopen(temp,"w");
	if(fp2==NULL)
	{
		printf("Error\n");
		fclose(fp);
		return 1;
	}
	char content[100];

	
	while((fgets(content,sizeof(content),fp))!=NULL)
	{
		if(linenumber!=line)
		{
			fputs(content,fp2);
		}
		line++;
	}

	remove(filename);
	rename(temp,filename);

	fclose(fp);
	return 0;
}





