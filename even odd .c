//wap in c one number from user and print "*" for odd number and "@"for even number
#include<stdio.h>
void accept(int no)
{
	if(no%2==0)
	{
		printf("\n *");
	}
	else
	{
		printf("\n@");
	}
}
int main()
{
	accept(12);
}
