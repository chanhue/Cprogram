#include <stdio.h>

int ch3_1_5(void) {
	int num1, num2, num3, fun;
	printf("세 정수를 입력하시오: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	fun = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("연산결과는: %d", fun);
	return 0;
}