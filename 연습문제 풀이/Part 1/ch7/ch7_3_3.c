#include <stdio.h>

int ch7_3_3(void) {
	int i = 2, num = 0; // 단의 수 >> i
  do{
    num=1; // 새로운 단을 위한 초기화 >> num은 전역변수기 때문에 매 반복마다 초기화를 해주어야함
    do{
      printf("%d * %d = %d\n", i, num, num*i);
      num++;
    }while(num<10);
    i++;
  }while(i<10);
	return 0;
}
