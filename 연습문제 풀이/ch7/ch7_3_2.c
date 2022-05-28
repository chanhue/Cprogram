#include <stdio.h>

int ch7_3_2(void) {
	int i = 0, num = 0, sum = 0;
	do {
		if (num % 2 == 0) { // if문을 이용하여 0부터 100까지의 수중 짝수를 판별
			sum += num;
		}
		num++;
		i++;
	} while (i < 101);
	printf("0부터 100까지의 짝수의 합: %d", sum);
	return 0;
}

/*
#include <stdio.h>

int ch7_3_2(void) {
	int num = 0, sum = 0;
	do {
		sum+=num;
	  num+=2;
	} while (num < 101);
  printf("0부터 100까지의 짝수의 합: %d", sum);
}
*/