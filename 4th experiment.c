#include<stdio.h>
int main()
{
	int n,a=0,b=1,temp,sum,i;
	printf("Name: m.thirumala manohar\nReg.no:192211851\nEnter last number of series:");
	scanf("%d",&n);
	printf("Fibonacci series: \n");
	printf("%d\n%d\n",a,b,b);
	sum=a+b;
	while(sum<=n)
	{
		printf("%d\n",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
	return 0;
}
