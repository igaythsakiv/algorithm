//program to  find power of a number using divide and conquer stratergy
#include<stdio.h>
long long int power(long long int x,long long int n)
{	long long int y=1;
	while(n>0)
	{
	if(n&1)y=y*x;
	x=x*x;
	n>>=1;

	}
return y;


}
int main()
{

	int n;
	printf("enter the number of testcase\n");
	scanf("%d",&n);
	while(n--)
	{
		long long int a,b;
		scanf("%lld%lld",&a,&b);
		long long int c=power(a,b);
		printf("%lld\n",c);
	}
	return 0;
}

