#include<stdio.h>
#include "mymath.c"

void main(){
	int a = 12;
	int b = 10;
	int sum = add(a, b);
	printf("Result = %d\n", sum);
}
