#define CRS_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a, b, temp;

	scanf_s("%d %d", &a, &b);

	temp = a;
	a = b;
	b = temp;

	printf("%d %d\n", a, b);

	return 0;
}
