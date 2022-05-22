#include <stdio.h>

int ch5_1_1(void) {
	int x1, y1, x2, y2, sq;
	printf("두 점의 좌표를 입력하시오:");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	sq = (x2 - x1) * (y2 - y1);
	printf("직사각형의 넓이는: %d", sq);
	return 0;
}