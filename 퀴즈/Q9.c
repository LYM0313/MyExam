#define _CRS_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int num;

	scanf_s("%d", &num);

	switch (num) {
	case 0:
		printf("일요일입니다.");
		break;
	case 1:
		printf("월요일입니다.");
		break;
	case 2:
		printf("화요일입니다.");
		break;
	case 3:
		printf("수요일입니다.");
		break;
	case 4:
		printf("목요일입니다.");
		break;
	case 5:
		printf("금요일입니다.");
		break;
	case 6:
		printf("토요일입니다.");
		break;
	}
	return 0;
}
