#include<stdio.h>

int main()
{
	int n;
	long long sum=0;
	scanf("%d",&n);
	sum=(1+n)*n/2;
	printf("%I64d",sum);
	return 0;
}
