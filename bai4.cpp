#include<stdio.h>
int main(){
	int m,n;
	printf("Nhap n:");scanf("%d",&n);
	printf("Nhap m:"); scanf("%d",&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<m;j++){ 
				printf ("|");
			printf("  + ");

 		} printf("  |\n\n");


 	}
	return 0;
}