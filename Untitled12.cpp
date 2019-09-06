 #include <stdio.h>
 #include <string.h>
 int main()
 {
 	char a[50];
 	printf ("Nhap mot ngay trong tuan ");
 	gets(a);
 	while ( strcmp(a,"thu hai")!=0 && strcmp(a,"thu ba")!=0 && strcmp(a,"thu tu")!=0 && strcmp(a,"thu nam")!=0 && strcmp(a,"thu sau")!=0 && strcmp(a,"thu bay")!=0 && strcmp(a,"chu nhat")!=0)
 		{
			printf ("Nhap mot ngay trong tuan ");
 			gets(a);
		}
	if( (strcmp(a,"thu hai")==0) || (strcmp(a,"thu ba")==0) || (strcmp(a,"thu tu")==0) || (strcmp(a,"thu nam")==0) || (strcmp(a,"thu sau")==0 ) || (strcmp(a,"thu bay")==0 ) || (strcmp(a,"chu nhat")==0))
		{
			printf(" la mot ngay trong tuan" );
		}	
	return 0;	
 }
