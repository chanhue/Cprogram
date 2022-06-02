#include <stdio.h>

int ch8_2_1(void) {
	int num, i, sq;
	for (i = 1; i < 10; i++) {
		if(i%2!=0)
      continue; // 2의 배수가 되는 단만 출력하기 위해 사용
    num = 1;
		for (; num < 10; num++) {
			sq = i * num;
			printf("%d * %d = %d\n", i, num, sq);
      if (num>=i)
        break; // 각 단의 수만큼만 곱셈을 실행하기 위해 사용
		}
	}
	return 0;
}

/*#include <stdio.h>

int ch8_2_1(void){
  int num, i,sq;
  for (i=2; i<10; i+=2){
	num=1;
	for (;num<=i;num++){
	  sq = i*num;
	  printf("%d * %d = %d\n", i, num, sq);
	  }
  }
  return 0;
}*/