#include <stdio.h>

int ch7_2_1(void){
  int num, sum, i;
  while(i<5){
    printf("정수를 입력하시오");
    scanf("%d",&num);
    i++;
  }
  printf("입력한 수의 합은: %d", sum);
  return 0;
}