#include <stdio.h>
int main()
{
	int n,i=1;
	printf (" nhap n : ");
	scanf("%d", &n);
	for(; n>=10 ;)
		{
			n/=10;
			i++;
		}
	printf("so n co %d chu so",i);
	return 0;	
}
