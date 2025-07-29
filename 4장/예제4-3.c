#define _CRS_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int a = 10, b = 10;

	++a;
	--b;

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}
