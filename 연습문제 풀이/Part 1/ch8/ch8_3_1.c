#include <stdio.h>

int ch8_3_1(void) {
	int n, dev;
	printf("정수를 입력하시오");
	scanf("%d", &n);
	dev = n / 10;
	switch (dev) {
	case 0:
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	default:
		printf("30이상");
		break;
	}
	return 0;
}