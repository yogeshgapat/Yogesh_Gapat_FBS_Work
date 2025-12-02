#include<stdio.h>
void main()
{
	int r1,r2,d1,d2,no, n2;
	printf("enter any 3 digit number");
	scanf("%d",&no);
	d1=no/10;
	d2=d1/10;
	r1=d1%10;
	r2=no%10;
   n2=r2*100+r1*10+d2;
   if(no==n2)
   {
   	printf("\nnumber is pelindrome");
   }
   else
   {
   	printf("number is not pelindrome");
   }
}
