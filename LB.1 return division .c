// wap which accept two number and return divison
#inlcude<stdio.h>
int divide(int no1,int no2)
{
	if(no1==0)
	{
		return -1;
		
	}
	else{
	ans=no1/no2;
	return ans;
    }
}
int main()
{
	int no1=0;
	int no2=0;
	int ret=0;
	printf("\n enter the number:");
	scanf("%d",&no1);
	printf("\n enter the number:");
	scanf("%d",&no2);
	ret=divide(no1,no2);
	pintf("\n division =%d",ret);
	
}

