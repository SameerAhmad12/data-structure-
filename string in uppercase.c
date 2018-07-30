#include<stdio.h>
int main()
{
	char ch[100];
	int c=0;
	printf("\n enter the string\n");
	gets(ch);
	printf("\n string in uppercase \n");
	while(ch[c]!='\0')
	{
		if(ch[c]>='a'&&ch[c]<='z')
		{
			ch[c]=ch[c]-32;
		}
		c++;
	}
	printf("\n%s\n",ch);
}