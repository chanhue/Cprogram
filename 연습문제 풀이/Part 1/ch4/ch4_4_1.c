#include <stdio.h>

int ch4_4_1(void) {
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);
	printf("반환값: %d", ~num + 1); //비트단위 연산에서 ~는 2의 보수연산
	return 0;
}