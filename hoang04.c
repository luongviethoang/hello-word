#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,r;
	printf(" nhap 1 so de:\n");
	scanf("%d", &r);
	a=r%2;
	if(a==0)
	printf("so chan");
	else 
	printf("so le");
	return 0;
}
