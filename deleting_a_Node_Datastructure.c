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
        printf("press 7 for display all list\n");
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

                default:
                        printf("Invalid Entry\n");
        }
}
return 0;
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

