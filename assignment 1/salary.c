#include<stdio.h>
void main()
{
	int da,ta,hra,sal;
	printf("enter salary");
	scanf("%d",&sal);
	if(sal<=5000)
	{
		da=(sal*10)/100;
		printf("\nda=%d",da);
		ta=(sal*20)/100;
		printf("\nta=%d",ta);
		hra=(sal*25)/100;
		printf("\nhra=%d",hra);
		
	}
	else
	{
		da=(sal*15)/100;
		printf("\nda=%d",da);
		ta=(sal*25)/100;
		printf("\nta=%d",ta);
		hra=(sal*30)/100;
		printf("\nhra=%d",hra);
		
	}
	
	
}
