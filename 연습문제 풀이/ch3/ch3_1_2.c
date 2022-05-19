#include <stdio.h>

int ch3_1_2(void){

  int num1,num2,num3,result;
  printf("세 정수입력 :");
  scanf("%d %d %d",&num1,&num2,&num3);
  result = num1 * num2 + num3; // result값이 변수선언의 바로 다음줄로 갈 경우 쓰레기값끼리계산되어 result가 정해지므로 scanf를 사용할때는 계산식이 이후에 와야합
  printf("%d*%d+%d=%d", num1,num2,num3,result);
  return 0;
}