#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	 
	printf ("nhap lan luot 3 canh cua tam giac");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	while ((c>=a+b) || (b>=a+c) || (a>=b+c))
		{
			printf ("nhap lan luot 3 canh cua tam giac");
			scanf("%d",&a);
			scanf("%d",&b);
			scanf("%d",&c);
		}
	if 	((c<a+b) && (b<a+c) && (a<b+c))
		{
			printf("day la ba canh cua mot tam giac");
			
		}
		
	return 0;
}
