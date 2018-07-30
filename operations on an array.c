#include<stdio.h>
int main()
{
	int arr[100],n,i,ch,p, item, flag=0, pos, element;
	
	while(1)
	{
	printf("\n \nenter your choice\n\n 1 for creating array\n\n 2 for displaying\n\n 3 for searching of an element\n\n 4 for inserting elements \n\n 5 for exit\n\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("\n enter limit of elements\t");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\n enter element %d: \t",i+1);
			scanf("%d",&arr[i]);
		}
	}
	else if(ch==2)
	{
		if(n==0)
		{
			printf("\narray empty\n");
		}
		
		else
		{
		printf("\n required arry\t");
		for(i=0;i<n;i++)
		{
			printf("%d\t",arr[i]);
		}
		}
	}
	else if(ch==3)
	{
		printf("\n enter the element to be searched\n");
		scanf("%d",&item);
		for(i=0;i<n;i++)
		{
			if(item==arr[i])
			{
				printf("\n match found\n");
				flag=1;
				break;
			}
		
		}
		if(flag==0){
		printf("\n match not found\n");
		}
	}
	else if(ch==4)
	{
		printf("\nenter the postion after which element is to be inserted\n");
		scanf("%d",&pos);
		if(pos<0)
		{
			printf("\n cannot insert\n");
		}
		else if(pos>=n)
		{
			printf("\ncant insert\n");
		}
		else
		{
		printf("\n enter new element\n");
		scanf("%d",&element);	
		for(i=n;i>pos;i--)
		{
			arr[i]=arr[i-1];
			arr[pos]=element;
		      n=n+1;
		}
		}
		
	}
	else  break;
	}
}