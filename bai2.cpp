#include <stdio.h>
#include <math.h>
int main (){
	int b[20];
	for (int i = 0; i < 20; i++ )
	    {
			scanf("%d", &b[i]);
	    }
	for  (int i = 0; i < 20; i++ )
	    {
	    	if ( b[i] % 2 == 1 )	
	    		{
	    			printf ("cac so le trong day la %d\n", b[i]);
				}

 	    }
	    return 0;
	}