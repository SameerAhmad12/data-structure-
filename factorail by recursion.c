#include<stdio.h>
int fact(int i)
{
	if(i<=1)
	{
		return 1;
	} 
	else
	{
		return i*fact(i-1);
	}
}
int main()
{		
	int i;
	printf("\n enter number\n");
	scanf("%d",&i);
	fact(i);
	printf("factorail of %d is \t%d\n",i,fact(i));
}