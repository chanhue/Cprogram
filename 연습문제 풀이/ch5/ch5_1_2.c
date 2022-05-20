#include <stdio.h>

int ch5_1_2(void) {
	double num1, num2;
	printf("두 실수 입력: ");
	scanf("%lf %lf", &num1, &num2); //double형의 변수를 입력 받을 때 사용되는 서식문자%lf
	printf(
		"합: %f \n 차: %f \n 곱: %f \n 분: %f", //double형 변수를 출력할때 사용하는 서식문자 %f
		num1 + num2,
		num1 - num2,
		num1 * num2,
		num1 / num2);
	return 0;
}