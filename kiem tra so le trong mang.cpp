#include <stdio.h>

int kiem_so_le(int A[],int n)
{
    for(int i=0; i<n ; i++)
		if(A[i] % 2 == 1)
    		{
        		return 1;
    		}
    return 0;
}
int main()
{
	int A[10],x,y;
		for (int i=0;i<10;i++)
			{
				scanf("%d", &A[i]);
			}
	for	(int i=0;i<10;i++)
		{
			if (kiem_so_le(A,x)==1)
				{
					printf("%d",kiem_so_le);
				}
		}
	return 0;
}	
