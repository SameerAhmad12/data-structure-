#include<stdio.h>
#include<stdlib.h>
void push(int);
int pop();
void veiw();
struct node 
{
	int data;
	struct node *next;
}*top=NULL;
int main()
{
	int ch, item=0;
	while(1)
	{
		printf("\n \n 1 for push \n\n 2 for pop \n\n 3 for veiw\n\n 4 for exit\n\n");
		scanf("%d",&ch);
		if(ch==1){
			printf("\nenter element\t:");
			scanf("%d",&item);
			push(item);
		}
		else if(ch==2)
		{
			item=pop();
			printf("%d\t",item);
		}
		else if(ch==3)
		{
			veiw();
		}
		else break;
	}
}
void push(int item)
{
	struct node  *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\noverflow\n");
		
	}
	else 
	{
		temp->data=item;
		temp->next=NULL;
		if(top==NULL)
		{
			top=temp;
		}
		else
		{
			temp->next=top;
			top=temp;
		}
	}
}
int pop()
{
	int item;
	struct node *temp;
	if(top==NULL)
	{
		printf("\nunder flow\n");
	}
	else
	{
		
		temp=top;
		top=top->next;
		free(temp);
		return item;
	}
}
void veiw()
{
	struct node *trav;
	if(top==NULL)
	{
		printf("\nstack empty\n");
		
	}
	else
	{
		trav = top;
		while(trav!=NULL)
		{
			printf("\t%d\t",trav->data);
			trav=trav->next;
		}
	}
}