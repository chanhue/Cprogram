#include <stdio.h>

int ch8_1_3(void) {
	int kr, en, math, ever;
  printf("국어점수를 입력하시오: ");
  scanf("%d", &kr);
  printf("영어점수를 입력하시오: ");
  scanf("%d", &en);
  printf("수학점수를 입력하시오: ");
  scanf("%d", &math);
  ever = (kr+en+math)/3;
  if (ever>89)
    printf("등급: A");
  else if (ever>79)
    printf("등급: B");
  else if (ever>69)
    printf("등급: C");
  else if (ever>49)
    printf("등급: D");
  else
    printf("등급: F");
	return 0;
}