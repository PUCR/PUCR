//accept on number from user if number is less than 10 then print "hello: otherwise print"Demo"
#include<stdio.h>
void display(int ino)
{
	if(ino<10)
	{
		printf("\n HELLO");
		
	}
	else
	{
		printf("\n Demo");
	}
}
int main()
{
	display(8);
}
