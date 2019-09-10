#include <stdio.h>
int main (){
	int A[12],x,y;
	for (int i = 0; i<12; i++ )
	    {
		scanf("%d", &A[i]);
	    }
	for  (int i = 0; i<12; i++ )
	    {
	    	x = x + A[i];
		}
	y+x/12;
	printf("gia tri trung binh cua day so la %d\n", y);
	return 0;
}