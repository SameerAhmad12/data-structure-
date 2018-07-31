#include<stdio.h>
int main()
{
	int i,j,size,temp,a[20];
	printf("\nEnter size of the array: \t");
	scanf("%d",&size);
	printf("\nEnter elements in to the array:\t");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	for(i=1;i<size;i++)
		 {
 		temp=a[i];
 		j=i-1;
 		while((j>=0)&&(temp<a[j]))
 			{
 			a[j+1]=a[j];
 			j=j-1;
 			}
	a[j+1]=temp;
		}
	printf("\nAfter sorting the elements are: \t");
	for(i=0;i<size;i++)
		printf("\t%d\t",a[i]);
}