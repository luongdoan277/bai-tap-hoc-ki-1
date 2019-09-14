#include <stdio.h>

int day_fibonacci(int n)
{
	int a,b,c,i;
	a=0;
	b=1;
	while (i<=(n-2))
		{
			c=a+b;
			a=b;
			b=c;
			i++;
		}
	printf("So thu %d trong day la %d ",n,c);	
	return 0;
}
int main()
{
	int n;
	printf("so thu tu ");
	scanf("%d",&n);
	day_fibonacci(n);
	return 0;
}	

