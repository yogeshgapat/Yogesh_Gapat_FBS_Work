#include<stdio.h>
void main()
{
	
	char c;int count,ap,dis,buy;
	printf("enter y if you are student & enter n if not");
	scanf("%c",&c);
	 printf("enter actual price of product");
	 scanf("%d",&ap);
	 printf("enter total buyed product price");
	 scanf("%d",&buy);
	
	if(c=='y')
	{
	//	printf("\nstudent");
		count=1;
	}
	else
	if(c=='n')
	{
		//printf("\nnot student");
		count=0;
	}
	else{
		printf("\nwrong input");
	 }
	 
	 if(count==1&&buy>500)
	 {
	 	dis=(ap*20)/100;
	 	printf("discount price is=%d",dis);
	 }
	 else
	 if(count==0&&buy>600)
	 {
	 	dis=(ap*15)/100;
	 	printf("discount pricr is=%d",dis);
	 	
	 }
	 else
	 {
	 	printf("out of policies so not discount");
	 }
	 
	 
	
}

