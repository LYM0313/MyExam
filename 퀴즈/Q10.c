#include<stdio.h>

int main() {
	int num;
	
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}

#include<stdio.h>

int main() {
	int num;
	
	for (int i = 1; i <= 100; i+=2) {
		printf("%d ", i);
	}
	return 0;
}

#include<stdio.h>

int main() {
	int num;
	
	for (int i = 2; i <= 100; i+=2) {
		printf("%d ", i);
	}
	return 0;
}

#include<stdio.h>

int main() {
	int num;
	int i = 100;

	while (i >= 0) {
		printf("%d ", i);
		i--;
	}
	return 0;
}

#include<stdio.h>

int main() {
	int num;
	
	for (int i = 100; i >= 0; i--) {
		printf("%d ", i);
	}
	return 0;
}
