#include <stdio.h>

int ch7_2_2(void) {
	char star = '*', o = 'o';
	int i = 0;
	while (i < 5) {
		int n = 0; // 변수 n의 값을 while문 안에 설정함으로써 지역변수의 특징을 이용해 행이 바뀔때마다 n의 값이 초기화되게 하여 중첩되는 while문에서의 출력되는o의 개수를 늘릴 수 있음 >>만약 이렇게 설정하지 않고 i와 함께 설정하게 되면 전역변수가 되어 i와 n이 같이 수가 늘어나 o의 개수를 늘릴수 없음
		while (n < i) {
			printf("%c", o);
			n++;
		}
		printf("%c\n", star);
		i++;
	}
	return 0;
}