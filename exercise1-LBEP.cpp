#include <stdio.h>

int main()
{
	int a,x,y=0;
	printf ("Nhap mot so: ");
	scanf("%d", &a);
	while (a>0)
		{
			x=a%10;
			y=y+x;
			a=a/10;
		}
	
	printf("Tong cac chu so la: %d\n",y);
	return 0;
}
