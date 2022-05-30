#include <stdio.h>

int ch7_4_1(void){
  int num1, num2, i, nplus, sum=0;
  printf("두 정수를 입력하시오");
  scanf("%d %d",&num1,&num2);
  nplus =num1;
  for(i=0;i<num2-num1+1;i++){
    sum+=nplus;
    nplus++;   //num1>>nplus num1은 전역변수로써 n1의 직접적인 증감을 해주게 되면 모든 n1의 값이 바뀌게 되어 출력값과 조건식이 성립이 되지 않을 수 있다. 따라서 nplus 라는 변수를 사용해 n1의 값은 유지하면서 조건에따른 연산이 가능하도록 구성하였다.    
  }
  printf("%d부터%d까지의 합은: %d",num1,num2,sum);
  return 0;
}