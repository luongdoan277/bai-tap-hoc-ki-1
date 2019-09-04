#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,e,f,g;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	d=b*b-4*a*c;
	if(d<0)
		{
			printf("Phuong trinh vo nghiem");			
		}
	else if (d>0)
		{
			e=(-b-sqrt(b*b-4*a*c))/2*a;
			f=(-b+sqrt(b*b-4*a*c))/2*a;
			printf ("x1 = %d\n",e);
			printf ("x2 = %d\n",f);
		}
		 else
		{
			g=-b/(2*a);
			printf ("phuong trinh co nghiem kep la %d\n",g);
			 	
		}
	
	
	
	
	
	return 0;
}

