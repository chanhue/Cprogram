#include <stdio.h>

int ch7_1_3(void) {
	int num = 1, sum = 0;
	while (num != 0) {
		printf("정수를 하나 입력하시오: ");
		scanf("%d\n", &num);
		sum += num;
	}
	printf("모든 정수의 합: %d", sum);
	return 0;
}