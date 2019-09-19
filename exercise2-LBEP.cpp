#include <stdio.h>
#include <string.h>

char doi_ki_tu(char A[])
{
	for(int i=0;i<strlen(A);i++)
		{
			if(A[i]>='A' && A[i]<='Z')
				{
					A[i]=A[i]+32;
				}
		}
	printf("Chuoi duoc doi thanh :\%s",A);	
}

int main()
{
	char A[50];
	printf("Chuoi can doi: ");
	gets(A);
	doi_ki_tu(A);
	return 0;
}
