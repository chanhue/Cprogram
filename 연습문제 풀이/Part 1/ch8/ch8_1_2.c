#include <stdio.h>

int ch8_1_2(void) {
	int num1, num2, min=0;
  printf("두 정수를 입력하시오: ");
  scanf("%d %d",&num1, &num2);
  min= num1-num2;
  if (min>=0)
    printf("두 수의 차는: %d", min);
  else
    printf("두 수의 차는: %d", -min);
	return 0;
}