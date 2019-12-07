#include <stdio.h>
#include<math.h>

int divisorsCount(int x) {	
	int count = 0;
	double sq = sqrt(x);
	for(int i = 1; i <= sq; i++) {
		if (x % i == 0) {
			if (x/i == i) {
				count++;
			}
			else {
				count += 2;
			}
		}
	}
	return count;
}

int main() {
	int count = 0;
	for (int i = 1; i < 10000000; i++) {
		if (divisorsCount(i) == divisorsCount(i+1)) {
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
