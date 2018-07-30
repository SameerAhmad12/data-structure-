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
}*head=NULL, *tail=NULL, ;
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n enter your choice\n \n 1 for create \n \n 2 for insert \n\n 3 for delete \n \n 4 for veiw\n\n 5 for exit\n \n");
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
	      int data ,i,n;
	      struct node * temp;
		printf("\n enter data\n");
		temp=(struct node*)malloc(sizeof(struct node));
		scanf("%d",temp->data);
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail=temp->next;
			tail=temp;
		
		}
}
void insert()
{
	struct node *temp, *trav=NULL;
	int target;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\nenter data to be inserted\n");
	scanf("%d",&temp->data);
	printf("\nenter the node after which to be inserted\n");
	scanf("%d",&target);
	trav=head;
	while(trav->data!=target)
	{
		trav=trav->next;
		temp->next=trav->next;
		trav->next=temp;
		if(trav==tail)
		tail=temp;
		tail=tail->next;
	}
  	
}
void delet()
{
	int item; 
	struct node *temp, *trav=NULL;
	printf("enter the element to be deleted");
	scanf("%d",&item);
	if(item==head->data)
	{
		temp= head;
		head=head->next;
		free(temp);
	}
	trav = head;
	while(trav->next->data!=item)
	{
		trav=trav->next;
		if(trav->next=tail)
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
}
void veiw()
{
	struct node *trav;
	trav=head;
	while(trav!=NULL)
	{
		printf("%d",trav->data);
		trav=trav->next;
	}
}