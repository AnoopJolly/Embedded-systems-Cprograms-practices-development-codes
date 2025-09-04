#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fp;
	char filename[100];
	printf("Enter the file name\n");
	scanf("%s",filename);
	getchar();

	char content[100];
	fp=open(filename,O_WRONLY|O_CREAT,0777);
	if(fp==-1)
	{
		printf("File 1 error\n");
		return 1;
	}

	int fp2;
	char filename2[100];
	printf("Enter th file name 2\n");
	scanf("%s",filename2);
	getchar();
	fp2=open(filename2,O_WRONLY,777);
	if(fp2==-1)
	{
		printf("File 2 error\n");
		close(fp);
		return 1;
	}


	int numread;
	while((numread=read(fp,content,100))>0)
	{
		write(fp2,content,numread);
	}

	close(fp);
	close(fp2);

	printf("Successfull\n");
	return 0;
}


