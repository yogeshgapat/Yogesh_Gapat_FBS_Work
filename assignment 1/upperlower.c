#include<stdio.h>
void main()
{
	int ch,A;
	printf("enter character:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("uppercase");
	}
	else
	{
		printf("lowercase");
	}
}
