#include <stdio.h>

int ch8_2_2(void) {
	int A, Z, i;
	for (A = 0; A < 10; A++) {
		for (Z = 0; Z < 10; Z++) {
			i = (A * 10 + Z) + (Z * 10 + A);
			if (i == 99) {
				printf("%d%d + %d%d = %d\n", A, Z, Z, A, i);
			}
		}
	}
	return 0;
}