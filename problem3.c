#include <stdio.h>
#include <math.h>

int main() {
	long int n, largest;
	long double sqrt_n;

	n = 600851475143;
	largest = 0;
	sqrt_n = sqrtl(n);

	for(int i = 3; i < sqrt_n; i += 2) {
		while(n % i == 0) {
			if(i > largest) {
				largest = i;
				n = n/i;
			}
		}
	}

	printf("%ld\n", largest);

	return 0;
}
