#include <stdio.h>
double CelToFah(double cel);
double FahToCel(double fah);

int ch9_1_2(void) {
	double cel, fah, choice;
	printf("온도의 종류를 입력하시오(cel = 1, fah = 2)");
	scanf("%lf", &choice);
	if (choice == 1) {
		printf("온도를 입력하시오: ");
		scanf("%lf", &cel);
		fah = CelToFah(cel);
		printf("화씨온도 fah는: %f", fah);
	} else {
		printf("온도를 입력하시오: ");
		scanf("%lf", &fah);
		cel = FahToCel(fah);
		printf("섭씨온도 cel은: %f", cel);
	}
	return 0;
}

double CelToFah(double cel) {
	return 1.8 * cel + 32;
}
double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}