	#include <stdio.h>
#include <math.h>
int main () {
	int i,count;
	int a[20];
	for (int n = 0; n < 20; n++ )
	    {
			scanf("%d", &a[n]);
     	}
    for (int n = 0; n < 20; n++ ) 	
	{   count=0;

 	    for (i=1; i < a[n]; i++)
		{ 

 			if ( a[n] % i == 0)
				{
					 count ++;
	 			}
		}
			if ( count <2)
		{
		printf(" so nguyen to trong day la %d\n", a[n]);
	    }
}
		return 0;
}