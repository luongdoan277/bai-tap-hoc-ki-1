#include <stdio.h>
#include <string.h>

const NhapMaTran(char a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%s",&a[i][j]);
      }
}
int main()
{
	char a[100][100];
    int m,n;
    printf("nhap so hang n = "); scanf("%d",&n);
    printf("nhap so cot m = "); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    char str1[20];    
  	printf("Nhap chuoi 1: ");
  	gets(str1);
	for(int i = 0; i < m; i++)
    	for(int j = 0; j < n; j++)
    		{
      			if (strcmp(a[i][j], str1) == 0)
      				{
					  printf("%d co trong mang hai chieu",str1);
					}
			}
	return 0;				    
}	

