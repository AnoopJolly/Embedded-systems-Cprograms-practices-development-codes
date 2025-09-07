#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	long int size;
	char filename[100];
	printf("Enter the file name\n");
	scanf("%s",filename);

	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("Error file not found\n");
		return 1;
	}
	fseek(fp,0,SEEK_END);
	size=ftell(fp);
	if(size==-1)
	{
		perror("ftell failed\n");
		fclose(fp);return 1;
	}
	printf("File size %ld bytes\n",size);
	fclose(fp);
	return 0;
}
