#include <stdio.h>

int ch7_1_5(void) {
	int count, i = 0;
	int num, sum = 0.0; //double >>int
	printf("입력할 정수의 개수를 정하시오: ");
	scanf("%d", &count);
	while (i < count) {
    printf("정수를 입력하시오");
		scanf("%d", &num); //%f >> %d
		sum += num;
		i++;
	}
	printf("입력한 수의 평균은: %f", (double)sum / count); //명시적 형변환 추가
  return  0;
}

/*
기존 구성한 코드
#include <stdio.h>

int ch7_1_5(void) {
	int count, i = 0;
	double num, sum = 0.0;
	printf("입력할 정수의 개수를 정하시오: ");
	scanf("%d", &count);
	while (i < count) {
    printf("정수를 입력하시오");
		scanf("%f", &num);
		sum += num;
		i++;
	}
	printf("입력한 수의 평균은: %f", sum / count);
  return  0;
}
*/