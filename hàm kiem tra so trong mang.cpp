#include <stdio.h>

bool kiem_tra_so_trong_mang(int A[],int n, int x)
	{
		for (int i=0; i<n ; i++)
			{
				if (x==A[i])
					{
						printf("so %d co trong mang",x);
						return true;
					}
			}
		return false;
	}

int main()
	{
		int A[10],x,n;
		
		for (int i=0;i<10;i++)
			{
				scanf("%d", &A[i]);
			}
		kiem_tra_so_trong_mang(A,10,2 );
		return 0;
	}									
