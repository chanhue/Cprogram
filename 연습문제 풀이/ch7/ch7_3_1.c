#include <stdio.h>

int ch7_3_1(void) {
	int num=1, sum= 0;
  while(num!=0){
    printf("정수를 입력하시오");
    scanf("%d", &num);
    sum+=num;
  }
  printf("입력한 수의 합은: %d", sum);
	return 0;
}