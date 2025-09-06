#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int rollnumber;
	float percentage;
};
void display(FILE *fp2)
{
	
	struct student s;
	rewind(fp2);// go to beginning of file
	printf("\n Student lists\n");

	while((fread(&s,sizeof(struct student),1,fp2)))
	{
		printf("Name:%s\n",s.name);
		printf("Roll number: %d\n",s.rollnumber);
		printf("Percentage: %.2f\n\n",s.percentage);
	}

}				
	

struct student add(FILE *fp1)
{
	int n;
	printf("Enter the number of student details to be saved\n");
	scanf("%d",&n);
	struct student details[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the Student name\n");
		scanf("%99s",details[i].name);
		printf("Enter the roll number\n");
		scanf("%d",&details[i].rollnumber);
		printf("Enter the Percentage\n");
		scanf("%f",&details[i].percentage);
	}
	fwrite(details,sizeof(struct student),n,fp1);
	printf("Student record added successfully\n");
}
int main()
{
	FILE *fp;

	int choice;
	struct student detail;
	       fp=fopen("Studentdatalist.txt","a+");
                if(fp==NULL)
                {
                        printf("Error");
                         return 1;
                }

	while(1)
	{

		printf("Press 1 to add details\n");
		printf("Press 2 for display\n");
		printf("Enter 2 for exit\n");
		printf("Enter the choices\n");
		scanf("%d",&choice);
	
		switch (choice)
		{
			case 1 : 
				add(fp);
				break;
			case 2 :
				display(fp);
				break;
			case 3 :
				fclose(fp);
				return 0;
			default :
				printf("invalid entry\n");
		}
	}
	return 0;
}

	
