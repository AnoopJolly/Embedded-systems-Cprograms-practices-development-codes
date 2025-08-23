#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *head=NULL;

void display(struct node *head);
struct node *creationofnode(struct node *head);
struct node *nodeabovehead(struct node *head);
struct node *nodeatend(struct node *head);
struct node *nodeatposition(struct node *head);
struct node *nodemiddle(struct node *head);

int main()
{
	int choice;
	while(1)
	{
	printf("Enter the choice\n");
	printf("Enter 1 for creating node\n");
	printf("Enter 2 for displaying \n");
	printf("Enter 3 for new node above head\n");
	printf("Enter 4 for new node at end\n");
	printf("Enter 5 the new node at position\n");
	printf("Enter 6 adding node in the middle\n");
	printf("Enter 9 for exiting the program\n");
		
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			head=creationofnode(head);
			break;
		case 2:
			display(head);
			break;
		case 3:
			head=nodeabovehead(head);
			break;
		case 4:
			head=nodeatend(head);
			break;
		case 5:
			head=nodeatposition(head);
			break;
		case 6:
			head=nodemiddle(head);
			break;
		case 9:
			printf("Exiting.....\n");
			return 0;
			break;
		default:
			printf("Invalid entry\n");
	}
	}
	return 0;
}

struct node *creationofnode(struct node *head)
{
	int n,data;
	struct node *temp=head;
	struct node *newnode=NULL;
	printf("Enter the no of node to be created\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("Memory allocation failed\n");
			return head;
		}
		printf("Enter the data for node '%d'\n",i+1);
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
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}

	printf("Null\n");

}

struct node *nodeabovehead(struct node *head)
{
	int data;
	struct node *temp=head;
	struct node *newnode=NULL;

	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory not allocated\n");
		return head;
	}
	printf("Enter the data for node 1\n");
	scanf("%d",&data);
	newnode->data=data;
	newnode->link=temp;
	
	head=newnode;
	temp=head;
	return head;

}

struct node *nodeatend(struct node *head)
{
	int data;
	struct node *temp=head;
	struct node *newnode;
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
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=newnode;

	return head;
}

struct node *nodeatposition(struct node *head)
{
	int data,i=1,position;
	struct node *temp=head;
	struct node *newnode=NULL;
	
	printf("Enter the position which you want to add new node\n");
	scanf("%d",&position);
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory allocation failed\n");
		return head;
	}
	printf("Enter the data for node\n");
	scanf("%d",&data);

	newnode->data=data;

	while(i<position-1 && temp!=NULL)
	{
		temp=temp->link;
		i++;
	}
	if(temp==NULL)
	{
		printf("position has exceeded the linked data list\n");
		return head;
	}
	newnode->link=temp->link;
	temp->link=newnode;

	return head;
}

	
struct node *nodemiddle(struct node *head)
{
	int data;
	struct node *temp=head;
	struct node *newnode=NULL;
	struct node *slow=temp;
	struct node *fast=temp;

	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory allocation failed\n");
		return head;
	}
	printf("Enter the data for node\n");
	scanf("%d",&data);
	newnode->data=data;

	while(fast->link!=NULL && fast->link->link!=NULL)
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	newnode->link=slow->link;
	slow->link=newnode;

	return head;
}





	
		






















