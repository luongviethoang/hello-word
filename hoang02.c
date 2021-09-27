#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,sum,avg;
	printf(" nhap  3 mon toan van anh lan luot:\n");
	scanf("%f %f %f",&a,&b,&c);
	sum= a+b+c;
	printf("tong diem 3 mon la:%f\n", sum);
	avg= sum/3;
	printf("trung binh ba mon la:%f\n", avg);
	if(avg<=5)
	printf("rat tiec truot roi em\n");
	else if(avg>5&&avg<7)
	printf("chuc mung tan hoc sinh trung binh\n");
    else if(avg>=7&&avg<8)
    printf("ghe tien tien luon\n");
	else
	printf("gioi thang nay gioi");
	
	return 0;
}
