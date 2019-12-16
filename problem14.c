#include <stdio.h>

#define MAX 1000000

int calc_chain(long n);

int main() {
	int longest_len = 0;
	int current_chain_len = 0;
	int largest_n = 1;

	for(long n = 1; n <= MAX; n++) {
		current_chain_len = calc_chain(n);

		if(current_chain_len > longest_len) {
			longest_len = current_chain_len;
			largest_n = n;
		}
	}

	printf("number: %ld, chain length: %d\n", largest_n, longest_len);
	return 0;
}

int calc_chain(long n) {
	int chain_len = 1;
	while(n != 1) {
		if(n%2 == 0) n /= 2;

		else n = 3*n+1;

		chain_len++;
	}

	return chain_len;
}
