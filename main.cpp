#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int a,b;
	printf("請輸入小時:");
	scanf("%d",&a);
	printf("請輸入分鐘:");
	scanf("%d",&b);
	if(450<(a*60+b)&&(a*60+b)<1020)
	 	 
	 printf("上課中");
	 
	else
	 printf("下課了");  
	return 0;
}
