#include <stdio.h>

int ch5_1_4(void){

  int ch1; //char ch1 >> int ch1 왜???
  /* 서식문자%d는 scanf 함수에서 int자료형이 default값으로 설정
     즉 변수를 char형으로 선언하고 %d를 통해 입력받는다면 메모리 공간에 오류가 생김 */
  printf("아스키코드로 출력할 정수를 입력하시오: ");
  scanf("%d", &ch1); //10진수형태의 char형(X) >> int형 정수하나 입력
  printf("위 정수의 아스키코드값: %c", ch1); //입력받은 정수를 문자(아스키코드)로 출력
  return 0;
}