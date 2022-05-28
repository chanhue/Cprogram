#include <stdio.h>

int ch7_1_4 (void) {
  int num, fig, i=9;
  printf("정수를 입력하시오: ");
  scanf("%d", &num);
  while(i>0){
    fig= i*num;
    printf("%d * %d = %d\n",num,i,fig);
    i--;
  }
  return 0;
}