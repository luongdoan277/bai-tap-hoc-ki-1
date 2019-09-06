#include <stdio.h>
int main()
{
	int a,b,c;
	printf("nhap a ");
	scanf("%d",&a);
	printf("nhap b ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("so a la %d\n", a);
	printf("so b la %d\n", b);
	
	return 0;
}
