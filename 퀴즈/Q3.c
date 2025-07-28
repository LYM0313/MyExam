#define CRS_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int c;
	double f;

	scanf_s("%d", &c);

	f = (double)9 / 5 * c + 32;

	printf("%lf", f);	
	
	return 0;
}
