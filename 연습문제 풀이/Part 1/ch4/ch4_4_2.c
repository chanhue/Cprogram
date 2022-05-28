#include <stdio.h>

int ch4_4_2(void) {
	int num;
	printf("정수 입력: "); //문제에서는 3을 주었지만 처음 값이 미지의 정수라 가정
	scanf("%d", &num);
	printf("반환값: %d", num<<3>>2); //비트단워 연산에서 >>n 혹은 <<n으로 비트 자릿수 변경(2의진수)
	return 0;
}