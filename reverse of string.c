#include<stdio.h>
#include<string.h>
int main()
{
	int i, count=0, end, begin;
	char str[20], str1[20];
	printf("\nenter string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	end = count-1;
	for(begin=0;begin<count;begin++)
	{
		str1[begin]=str[end];
		end--;
		
	}
	str1[begin]='\0';
	printf("\nreverse string \t %s \n",str1);
}