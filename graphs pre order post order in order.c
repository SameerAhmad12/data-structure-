#include<stdio.h>
#include<stdlib.h>
void create();
void pre_order(struct node *);
void in_order(struct node *);
void post_order(struct node *);
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL,*temp,*trav;
int main()
{
	int ch;
	while(1)
	{
		printf("\n\n 1 for create \n\n 2 for pre order\n\n 3 for in order \n\n 4 for post order\n\n 5 for exit\n\n");
		scanf("%d",&ch);
		if(ch==1)create();
		else if(ch==2)pre_order(root);
		else if(ch==3)in_order(root);
		else if(ch==4)post_order(root);
		else break;
	}
}
void create()
{
	int i, n;
	printf("\n enter number of node\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->left=NULL;
		temp->right=NULL;
		printf("\n enter data\n");
		scanf("%d",&temp->data);
		if(root==NULL)
		root=temp;
		else
		{
			trav=root;
			while(1)
			{
				if(temp->data<trav->data)
				{
					if(trav->left==NULL)
					{
						trav->left=temp;
						break;
					}
					else
					{
						trav=trav->left;
					}
				}
				else if(temp->data>trav->data)
				{
					if(trav->right==NULL)
					{
						trav->right=temp;
						break;
					}
					else 
					trav=trav->right;
				}
				else
				{
					printf("\ninvalid item\n");
					break;
				}
			}
		}
	}
}
void pre_order(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		printf("%d\t",root->data);
		pre_order(root->left);
		pre_order(root->right);
	}
}
void in_order(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		in_order(root->left);
		printf("%d\t",root->data);
		in_order(root->right);
	}
}
void post_order(struct node *root)
{
 	if(root==NULL)
	{
		return;
	}
	else
	{
		
		post_order(root->left);
		post_order(root->right);
		printf("%d\t",root->data);
	}
}