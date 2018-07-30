#include<stdio.h>
#include<stdlib.h>
void enque();
int deque();
void veiw();
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL,*temp;
int main()
{
	int ch;
	while(1)
	{
		printf("\n 1 for enque\n\n 2 for deque\n\n 3 for veiw\n\n 4 for exit\n\n");
		scanf("%d",&ch);
		if(ch==1)enque();
		else if(ch==2)deque();
		else if(ch==3)veiw();
		else break;
	}
}
void enque()
{
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n enter data\n");
	scanf("%d",&temp->data);
	temp->next;
	if(temp==NULL)
	{
		printf("\noverflow\n");
		
	}
	else
	{
		if(rear==NULL&&front==NULL)
		{
			rear=temp;
			front=temp;
		}
		else
		{
			rear->next=temp;
			rear=temp;
		}
	}
}
int deque()
{
	int item;
	if(front==NULL)
	printf("\nunderflow\n");
	else
	{
		item=front->data;
		temp=front;
		front=front->next;
		free(front);
		return item;
		
	}	
}
void veiw()
{
	struct node *trav;
	trav=front;
	if(front==NULL)
	printf("\n empty\n");
	else
	{
		printf("\n required queue\t :");
	while(trav!=NULL)
	{
		printf("%d\t",trav->data);
		trav=trav->next;
	}
	}
}