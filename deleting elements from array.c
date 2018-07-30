#include<stdio.h>
int main()
{
	int arr[100],n,i,ch,p, item, flag=0;
	
	while(1)
	{
	printf("\n \nenter your choice\n\n 1 for creating array\n\n 2 for displaing\n\n 3  for deleting element from array \n\n 4 for exit\n\n");
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
		printf("\n enter element \n");
		scanf("%d",&item);
		for(i=0;i<n;i++)
		{
			
			if(item==arr[i])
			{
			p=i;	
			for(i=p;i<n;i++)
			{
				arr[i]=arr[i+1];
				n=n-1;
				flag=1;
				printf("\n element deleted\n");
			}
			
			}
			
			
	}
	if(flag==0)
		{
			printf("\nelement not found\n");
		}
			
	}
	else  break;
	}
}