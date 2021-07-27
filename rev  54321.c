//wap one number and check whether is divisible by 5 or not
//i/p==15
//o/p==true
#include<stdio.h>
//#define True
//#define False
int check(int no)
{
	if((no%5)==0)
	{
	   printf("\ntrue");
	}
	else
	{
		 printf("\nfalse");
	}
}
int main()
{
	
	int no;
	printf("\n enter the number:");
	scanf("%d",&no);
	int ret;
	//printf("%d",ret);
    ret=check(no);
  	printf("%d",ret);
	
}
