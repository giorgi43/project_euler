#include <stdio.h>

int reverse(int n) {
	int rv = 0;
	while(n != 0) {
		rv = rv * 10;
		rv = rv + n%10;
		n = n/10;
	}
	return rv;
}

int main() {
	int largest = 0;
	int n;
	int rev_n;

	for(int i = 100; i <= 999; i++) {
		for(int j = 100; j < 999; j++) {
			n = i*j;
			rev_n = reverse(n);
			if(n == rev_n && n > largest) {
				largest = rev_n;
			}
		}
	}

	printf("%d\n", largest);
	return 0;
}
