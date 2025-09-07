#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{

	char filename[100];
	printf("Enter the file name\n");
	scanf("%s",filename);
	FILE *fp;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("File not exist\n");
		return 1;
	}
	int readnum;
	int buff;
	int min=INT_MAX;
	int max=INT_MIN;
	while(fread(&buff,sizeof(int),1,fp)==1)
	{
		if(buff<min)
		{
			min=buff;
		}
		if(buff>max)
		{
			max=buff;
		}
	}

	printf("min value is %d\n", min);
	printf("Max value is %d", max);
	fclose(fp);
	return 0;
}




