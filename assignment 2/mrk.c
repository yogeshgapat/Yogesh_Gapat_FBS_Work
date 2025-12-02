#include<stdio.h>
void main()
{
	int mrk;
	printf("enter your total percentage");
	scanf("%d",&mrk);
	if(mrk>100)
	{
		printf("range is invalid");
	}
	else
	if(mrk>75&&mrk<=100)
	{
		printf("destination");
	}
	else
	if(mrk>65&&mrk<=75)
	{
		printf("first class");
	}
	else
	if(mrk>55&&mrk<=65)
	{
		printf("second class");
	}
	else
	if(mrk>=35&&mrk<55)
	{
		printf("pass class");
	}
	else
	{
		printf("fail");
	}
}
