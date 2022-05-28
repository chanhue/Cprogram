#include <stdio.h>

int ch7_2_1(void){
  int num, sum, i=0;
  while(i<5){
    printf("1이상의 정수를 입력하시오");
    scanf("%d",&num);
    while(num<1){
      printf("입력한 정수는 1이하입니다\n다시 입력하시오");
      scanf("%d", &num);
    }
    sum += num;
    i++;
  }
  printf("입력한 수의 합은: %d", sum);
  return 0;
}