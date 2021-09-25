#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("tra loi\n");
	int principal, period;
	float rate, si;
	principal = 1000;
	period = 3;
	rate = 0.5;
	si = principal * period * rate / 100;
	printf("%f", si);
	return 0;
}
	
