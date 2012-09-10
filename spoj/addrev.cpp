#include <stdio.h>

int reverse(int num)
{
	int n=num;
	int ans=0;
	int dig=0;

	while(n!=0)
	{
		dig=n%10;
		ans=ans*10+dig;
		n/=10;
	}
	return ans;
}
int main()
{
	int testnum,i,num1,num2,ans;
	scanf("%d",&testnum);
	for(i=0;i<testnum;i++)
	{
		scanf("%d %d",&num1,&num2);
		ans=reverse(num1)+reverse(num2);
		printf("%d",reverse(ans));
	}
	return 0;
}