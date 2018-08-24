#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void create();
void insert();
void delet();
void veiw();
struct node
{
	int data;
	struct node *next;
}*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("\n 1 for create \n \n 2 for insert \n\n 3 for delete\n\n 4 for veiw\n\n 5 for exit\n\n");
		scanf("%d",&ch);
		if(ch==1) create();
		else if(ch==2) insert();
		else if(ch==3) delet();
		else if(ch==4) veiw();
		else break;
	}
}
void create()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n enter data\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
	head=temp;
	tail=temp;	
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
}
void insert()
{
	struct node *temp , *trav; int ch; int target;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\nenter new node\t");
	scanf("%d",&temp->data);
	   	trav=head;
	   	printf("\n enter the target after which element isto be inserted\n");
	   	scanf("%d",&target);
	 while(trav->data!=target)
  {
  	trav=trav->next;
  	
  }
              temp->next=trav->next;
		  
		  trav->next=temp;
		  if(trav==tail)
		  {
  			tail->next=temp;
  			temp->next=NULL;
  			tail=temp;
  		}
  	
}
void delet()
{
	int item;
	struct node *trav ,*temp;
	printf("\nenter data to be deldted\n");
	scanf("%d",&item);
	if(item==head->data)
	{
		temp=head;
		head=temp->next;
		free(temp);
	}
	trav=head;
	while(trav->next->data!=item)
	{
		trav=trav->next;
	}
	if(trav->data==tail->data)
	{
		tail=trav;
		temp=trav->next;
		tail->next=NULL;
		free(temp);
	}
	else
	{
		temp=trav->next;
		trav->next=temp->next;
		free(temp);
	}
	}


void veiw()
{
	struct node *trav;
	trav=head;
	while(trav!=NULL)
	{
		printf("\t %d \t",trav->data);
		trav=trav->next;
	}
}