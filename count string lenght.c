#include<stdio.h>
#include<string.h>
int main()
{
	int i, count=0;
	char str[20];
	printf("\nenter string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("\n%d\n",count);
}