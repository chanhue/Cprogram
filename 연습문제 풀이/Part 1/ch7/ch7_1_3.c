#include <stdio.h>

int ch7_1_3(void) {
	int num = 1, sum = 0;
	while (num != 0) {
		printf("정수를 하나 입력하시오: ");
		scanf("%d", &num); // scanf("%d\n", &num);에서 개행문자\n 삭제
		sum += num;
	}
	printf("모든 정수의 합: %d", sum);
	return 0;
} //개행문자로 인한 출력의 오류?? >> 공부하기