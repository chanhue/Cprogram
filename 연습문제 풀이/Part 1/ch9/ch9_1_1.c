#include <stdio.h>
int compareb(int num1, int num2, int num3);
int compares(int num1, int num2, int num3);

int ch9_1_1(void) {
	int num1, num2, num3;
	printf("세 정수를 입력하시오");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("가장 큰 수는: %d\n", compareb(num1, num2, num3));
	printf("가장 작은 수는: %d\n", compares(num1, num2, num3));
}

int compareb(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

int compares(int num1, int num2, int num3) {
	if (num1 < num2 && num1 < num3)
		return num1;
	else if (num2 < num1 && num2 < num3)
		return num2;
	else
		return num3;
}