#include <stdio.h>

int ch7_1_1(void){
  int n, i;
  printf("양의 정수를 입력하시오: ");
  scanf("%d", &n);
  while(i<n){
    printf("Hello world\n");
    i++;
  }
  return 0;
}