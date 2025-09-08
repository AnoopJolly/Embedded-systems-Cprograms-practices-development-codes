#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char filename[100];
	
	printf("Enter the file name\n");
	scanf("%s",filename);

	FILE *fp;
	fp=fopen(filename,"a");
	if(fp==NULL)
	{
		printf("Error file not found\n");
		return 1;
	}
	time_t now =time(NULL);
	struct tm *local =localtime(&now);

	if(local==NULL)
	{
		printf("error lolcal time failedd\n");
		return 1;
	}

	fprintf(fp,"%d:%2d:%2d  %d-%d-%d\n", local->tm_hour,local->tm_min,local->tm_sec,\
						local->tm_mday,local->tm_mon+1,local->tm_year+1900);
	fclose(fp);
	return 0;
}
	
