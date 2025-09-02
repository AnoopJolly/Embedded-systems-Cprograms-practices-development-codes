#include<stdio.h>
#include<stdlib.h>

void create()
{
	char filename[100];
	char content[100];
	printf("Enter new file name\n");
	scanf("%s",filename);

	FILE *fp=fopen(filename,"w");
	if(fp==NULL)
	{
		printf("Error creating file.\n");
		return ;
	}
	printf("Enter content to write (end with enter\n");
	getchar();//clear input buffer
	fgets(content,sizeof(content),stdin);

	fputs(content,fp);

	fclose(fp);
	printf("File '%s' created and written succesfullt\n",filename);
}

void read()
{
	char filename[100];
	printf("Enter the file name\n");
	scanf("%s",filename);
	FILE *fp;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("Error reading %s\n" ,filename);
		return ;
	}
	int ret;
	char content;
	while((content=fgetc(fp))!=EOF)
	{
	printf("%c",content);
	}
	
	fclose(fp);
}

void update()
{
	char filename[100];
	char content[100];
	printf("Enter the file name\n");
	scanf("%s",filename);
	FILE *fp;
	fp=fopen(filename,"w");
	if(fp==NULL)
	{
		printf("Error opening file\n");
		return ;
	}
	printf("Enter the content to append\n");
	getchar();
	fgets(content,sizeof(content),stdin);
	fputs(content,fp);

	fclose(fp);
	printf("file %s updated succesfully\n",filename);
}

void delete()
{
	char filename[100];
	printf("Enter the file name\n");
	scanf("%s",filename);

	if(remove(filename)==0)
	{
		printf("file %s removed succesfully\n",filename);
	}
	else
	{
		printf("File not found\n");
	}
}









int main()
{
	while(1)
	{
		int choice;

		printf("Enter the choice\n");
		printf("press 1 create a file\n");
		printf("press 2 Read a file\n");
		printf("press 3 update a file\n");
		printf("press 4 Delete a file\n");
		printf("press 5 exit....\n");

		scanf("%d",&choice);
		FILE *f1;

	switch(choice)
	{
		case 1:
			create();
			break;
		case 2:
			read();
			break;
		case 3:
			update();
			break;
		case 4:
			delete();
			break;
		case 5:
			printf("Exiting....\n");
			return 0;
			
		default :
			printf("Invalid command\n");

			return 0;
	}



	}

	return 0;
}

