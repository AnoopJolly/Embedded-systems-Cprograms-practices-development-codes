#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *link;
};
void display(struct node *head);
struct node *createnodes(struct node *head);
struct node *delete(struct node *head);
struct node *occurance(struct node *head);
struct node *smallestlargests(struct node *head);
struct node *copysinglelist(struct node *head);
struct node *largest_to_end(struct node *head);
struct node *smallesttobegining (struct node *head);
void printreverse(struct node *head);
struct node *removefirstnodeandmovetoend(struct node *head);
struct node *removelastnodeandmovetobegining(struct node *head);
int count=0;
int max=0;
int min=100;
int main()
{
        struct node *head=NULL;

        int choice;
while(1)
{
        printf("Enter the choice\n");
        printf("Press 1 for creating nodes\n");
        printf("Press 2 for add new node to the begining\n");
        printf("press 3 for add new node to the end\n");
        printf("press 4 for add new node to the middle\n");
        printf("press 5 for add node at position\n");
        printf("press 6 for delete not at position\n");
	printf("press 9 for find the number of occurance\n");
	printf("press 10 for finding smallest and largets elements of a single linked list\n");
       	printf("press 11 for creating copy a single linked list\n");
	printf("press 12 for to move largets to end\n");
	printf("Press 13 for to move smallest to begining\n"); 
       	printf("press 7 for display all list\n");
	printf("press 14 for display list in reversed order\n");
	printf("press 15 for removing first node and move it to the end of the list\n");
	printf("press 16 for removing lastnode and moving it the top of list\n");
        printf("Press 8 for exit the program\n");

        scanf("%d",&choice);

        switch (choice)
        {
                case 1:
                        head=createnodes(head);
                        break;
                case 7:
                        display(head);
                        break;
                case 6:
                       head=delete(head);
                        break;
                case 8:
                        printf("Exiting....\n");
                        return 0;
		case 9:
			head=occurance(head);
			printf("%d\n",count);
			break;
		case 10:
			head=smallestlargests(head);
			printf("max is :%d\n min is :%d\n",max,min);
			break;
		case 11:
			head=copysinglelist(head);
			break;
		case 12:
			head=largest_to_end(head);
			break;
		case 13:
			head=smallesttobegining(head);
			break;
		case 14:
			printreverse(head);
			break;
		case 15:
			head=removefirstnodeandmovetoend(head);
			break;
		case 16:
			head=removelastnodeandmovetobegining(head);
			break;
                default:
                        printf("Invalid Entry\n");
        }
}
return 0;
}

struct node *removelastnodeandmovetobegining(struct node *head)
{
	struct node *temp=head;
	int count=1;
	struct node *originalnode=NULL;
	while(temp->link!=NULL)
	{
		temp=temp->link;
		count++;
	}
	temp=head;
	for(int i=0;i<count-2;i++)
	{
		temp=temp->link;
	}
	originalnode=temp->link;
	temp->link=NULL;
	originalnode->link=head;
	head=originalnode;


	return head; 
}






struct node *removefirstnodeandmovetoend(struct node *head)
{
	int count=1;
	struct node *temp=head;
	if(head==NULL)
	{
		printf("the list id empty\n");
		return head;
	}
	if(head->link==NULL)
	{
		return head;
	}
	struct node *currentnode=head;
	head=head->link;
	currentnode->link=NULL;

	temp=head;	
		
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=currentnode;
	

	return head;
}

	

struct node *largest_to_end(struct node *head)
{
	if(head==NULL||head->link==NULL)
	{
		return head;
	}
	struct node *maxnode=head;
	struct node *currentnode=head->link;
	struct node *prevmax=NULL;
	struct node *prev=head;

	while(currentnode!=NULL)
	{
		if(currentnode->data>maxnode->data)
		{
			maxnode=currentnode;
			prevmax=prev;
		}
		prev=currentnode;
		currentnode=currentnode->link;
	}
	if(maxnode->link==NULL)
	{
		return head;
	}
	if(prevmax==NULL)
	{
		head=head->link;
	}
	else
	{
		prevmax->link=maxnode->link;
	}
	maxnode->link=NULL;
	struct node *temp=head;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=maxnode;
	return head;
}
struct node *smallesttobegining(struct node *head)
{
	if(head==NULL || head->link==NULL)
	{
		return head;
	}
	struct node *minnode=head;
	struct node *currentnode=head;
	struct node *prevmin=NULL;
	struct node *prev=head;

	while(currentnode!=NULL)
	{
		if(currentnode->data<minnode->data)
		{
			minnode=currentnode;
			prevmin=prev;
		}
		prev=currentnode;
		currentnode=currentnode->link;
	}
	if(minnode==head)
	{
		return head;
	}
	if(prevmin!=NULL)
	{
		prevmin->link=minnode->link;
	}
	minnode->link=head;
	head=minnode;

	return head;
}





struct node *copysinglelist(struct node *head)
{
	if (head==NULL)
	{
		printf("the list is empty\n");
		return NULL;
	}

	struct node *temp=head;
	struct node *copyhead=NULL;
	struct node *copytail=NULL;

	while(temp!=NULL)
	{

		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("Memory allocation failed\n");
			return NULL;
		}
		newnode->data=temp->data;
		newnode->link=NULL;
	
		if(copyhead==NULL)	
		{
			copyhead=newnode;
			copytail=newnode;
		}
		else
		{
			copytail->link=newnode;
			copytail=newnode;
		}
		temp=temp->link;
	}
	return copyhead;
}


struct node *delete(struct node *head)
{
        int position;
        int i=1;
        struct node *temp=head;
        printf("Enter the position\n");
        scanf("%d",&position);

        if(position==1)
        {
                head=head->link;
                free(temp);
                temp=head;
        }
        while(i<position-1 && temp!=NULL)
        {
                temp=temp->link;
                i++;
        }
        while(temp==NULL || temp->link==NULL)
        {
                printf("Invalid position\n");
                return head;
        }

        struct node *nodetodelete=temp->link;
        temp->link=nodetodelete->link;
        free(nodetodelete);


        return head;
}
struct node *createnodes(struct node *head)
{
        struct node *temp=head;
        struct node *newnode=NULL;
        int n;
        int data;
        printf("Enter the number of nodes to create\n");
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {


                newnode=(struct node*)malloc(sizeof(struct node));
                if(newnode==NULL)
                {
                        printf("Memory allocation failed\n");
                        return head;
                }

                printf("Enter the data\n");
                scanf("%d",&data);
                newnode->data=data;
                newnode->link=NULL;

                if(head==NULL)
                {
                        head=newnode;
                        temp=head;
                }
                else
                {
                        temp->link=newnode;
                        temp=temp->link;

                }

        }
        return head;
}
void display(struct node *head)
{
        struct node *temp=head;
        if(temp==NULL)
        {
                printf("The list is empty\n");
                        return;
        }
        else
        {
                while(temp!=NULL)
                {
                        printf("%d->",temp->data);
                        temp=temp->link;
                }
                printf("NULL\n");

        }
}
struct node *occurance(struct node *head)
{
	int data;
	printf("Enter the data\n");
	scanf("%d",&data);

	struct node *temp=head;
	while(temp!=NULL)
	{
		if(temp->data==data)
			count++;

		temp=temp->link;
		
	}
}
struct node *smallestlargests(struct node *head)
{

	int data1;
	struct node *temp=head;
	while(temp!=NULL)
	{
		data1=temp->data;
		if(data1>max)
		{
			max=data1;
		}
		if(data1<min)
		{
			min=data1;
		}
		temp=temp->link;
	}
	
}
void printreverse(struct node *head)
{
	if(head==NULL)
	{
		return;
	}
	printreverse(head->link);
	printf("%d->",head->data);
}





