#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char filename[100];
	char content[1000];
	char contentnew[100];
	printf("Enter the file name\n");
	scanf("%s",filename);
	getchar();
	fp=fopen(filename,"a");
	if(fp==NULL)
	{
		printf("Error file not found\n");
		return 1;
	}

	printf("Enter the new content or data\n");
	fgets(contentnew,sizeof(contentnew),stdin);
	
	
	fprintf(fp,"%s",contentnew);

	fclose(fp);
	printf("appending complete\n");
	return 0;
}

