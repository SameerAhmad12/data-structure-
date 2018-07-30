#include<stdio.h>
int main()
{
	int arr[100],n,i,ch,p;
	
	while(1)
	{
	printf("\n \nenter your choice\n\n 1 for creating array\n\n 2 for displaing\n\n 3 for exit\n\n");
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
	else  break;
	}
}