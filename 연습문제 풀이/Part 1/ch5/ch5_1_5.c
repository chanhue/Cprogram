#include <stdio.h>

int ch5_1_5(void){

  char ch1;
  printf("정수로 출력할 아스키코드를 입력하시오: ");
  scanf("%c", &ch1); //문자 하나를 입력
  printf("위 아스키코드의 정수값: %d", ch1); //입력받은 문자를 정수로 출력
  return 0;
} //5_1_4의 역과정