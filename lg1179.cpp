#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long int a, b, digit = 0;
	scanf("%lld%lld", &a, &b);
	for (long long int i=a; i <= b; i++) {
		a = i;
		while (a >0) {
			if (a % 10 == 2)digit++;
			a /= 10;
		}
	}
	printf("%lld", digit);
	return 0;
}