#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	int sec,min,hour;
	
	printf("input second :");
	scanf("%i",&a);
	
	sec= a%60;
	min=(a%3600)/60;
	hour=a/3600;
	
	printf("The time is %d:%d:%d",hour,min,sec);
	system("PAUSE");
	return 0;
}
