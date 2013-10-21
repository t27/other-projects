#include <stdio.h>

//codechef november2012
int getnumofcoins(int orig,int n,int final,int k)
{
	if(orig==final)
		return n-k+(k/2);
	else
		return n-(n-k+(k/2));
}
int main()
{

  return 0;
}