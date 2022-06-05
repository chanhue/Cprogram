#include <stdio.h>
int Fib(int num);

int ch9_1_3(void) {
	int num;
	printf("정수를 입력하시오");
	scanf("%d", &num);
	Fib(num);
	return 0;
}

int Fib(int num) {
	int i, fib = 0;
	if (num == 0)
		printf ("%d", fib);
	else if (num == 1) {
		fib += 1;
		printf ("%d", fib);
	} else {
		fib += 1;
		for (i = 0; i < num - 2; i++) {
			fib += fib;
      printf ("%d", fib);
		}
	}
}