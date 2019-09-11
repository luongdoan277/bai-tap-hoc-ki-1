#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("Nhap a : ");
	scanf("%d",&a);
	
	switch (a)
		{
			case 1 : printf("Chon mon an\n");
					 printf("1. com ga \n");
					 printf("2. pho \n");
					 printf("3. bun \n");
					 printf("4. quay lai\n");
					 int b;
					 printf("Nhap b : ");
					 scanf("%d",&b);
					 switch (b)
					 	{
					 		case 1 : printf("cam on");
							 		 break;
							case 2 : printf("cam on");
									 break;
							case 3 : printf("cam on");
									 break;
						}
					break;	
			case 2 : printf("chon do uong\n");
					 printf("1. nuoc cam \n");
					 printf("2. coca \n");
					 printf("3. pepsi\n");
					 printf("4. quay lai\n");
					 int c;
					 printf("Nhap c : ");
					 scanf("%c",&c);
					 switch (c)
					 	{
					 		case 1 : printf("cam on");
							 		 break;
							case 2 : printf("cam on");
									 break;
							case 3 : printf("cam on");
									 break;
						}
					break;							
			case 3 : printf("so tien can tra la:");
					 int r;
					 r = rand();
					 printf("%d",r);
				 	 break;
		}
	return 0;
}
