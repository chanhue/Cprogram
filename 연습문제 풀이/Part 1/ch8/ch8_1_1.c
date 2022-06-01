#include <stdio.h>

int ch8_1_1(void) {
	int i;
	for (i = 1; i < 101; i++) {
		if (i % 7 == 0 || i % 9 == 0) // && >> || 논리연산자 구분하기!!
			printf("7또는 9의 배수: %d\n", i);
	}
	return 0;
}