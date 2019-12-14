#include <stdio.h>

int main() {
	unsigned a, b, c, sum;
	a = 1;
	b = 2;
	sum = 0;
	while(a < 4000000) {
		if(b % 2 == 0) {
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%u\n", sum);
	return 0;
}
