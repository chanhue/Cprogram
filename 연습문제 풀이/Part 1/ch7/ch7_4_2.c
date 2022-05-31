#include <stdio.h>

int ch7_4_2(void) {
	int n, i, fac = 1;
	printf("정수를 입력하시오");
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		fac *= i;
	}
	printf("입력한 수의 계승 %d!은: %d", n, fac);
	return 0;
}