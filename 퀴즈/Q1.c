#define CRS_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
	int width, height;
	scanf_s("%d %d", &width, &height);

	int area = width * height;

	printf("%d\n", area);

	return 0;
}
