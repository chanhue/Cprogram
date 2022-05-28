#include <stdio.h>

int ch7_1_2(void){
  int n, i, t=0;
  printf("양의 정수를 입력하시오: ");
  scanf("%d", &n);
  while(i<n){
    t+=3;
    printf("%d\n", t);
    i++;
  }
  return 0;
}