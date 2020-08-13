#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c, powa, powb;
	scanf_s("%lf %lf", &a, &b);
	if (a >= 1 && b >= 1) {
		powa = pow(a, 2);
		powb = pow(b, 2);
		c = powa + powb;
		c = sqrt(c);
		printf("%.6lf", c);
	}
	return 0;
}