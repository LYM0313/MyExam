#define _CRS_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int month;

	scanf_s("%d", &month);

	if (month >= 1 && month <= 12) {
		if (month >= 3 && month <= 5) {
			printf("봄입니다.");
		}
		else if (month >= 6 && month <= 8) {
			printf("여름입니다.");
		}
		else if (month >= 9 && month <= 11) {
			printf("가을입니다.");
		}
		else {
			printf("겨울입니다.");
		}
	}
	else {
		printf("잘못된 월입니다.");
	}

	return 0;
}
