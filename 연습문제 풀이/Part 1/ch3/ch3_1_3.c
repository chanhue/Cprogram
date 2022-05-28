#include <stdio.h>

int ch3_1_3 (void){

  int num, sq;
  printf("정수를 입력하시오: ");
  scanf("%d", &num);
  sq = num*num;
  printf("%d 의 제곱은: %d", num,sq);
  return 0;
}