#include <stdio.h>

int ch3_1_4(void) {
	int num1, num2, quo, rem;
	printf("두 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);
	quo = num1 / num2;
	rem = num1 % num2;
	printf("%d와 %d의 몫과 나머지는: %d, %d", num1, num2, quo, rem);
	return 0;
}