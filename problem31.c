#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int coins[] = {1,2,5,10,20,50,100,200};

int main(int argc, char *argv[]) {
	if(argc <= 1) {
		printf("no arguments\n");
		exit(1);
	}

	int total = atoi(argv[1]);
	unsigned long int combinations[total+1];
	memset(combinations, 0, sizeof(combinations)); // set all zeros
	
	int coinsCount = sizeof(coins)/sizeof(int);

	combinations[0] = 1;
	for(int i = 0; i < coinsCount; i++) {
		for(int j = 0; j <= total; j++) {
			if(j >= coins[i]) combinations[j] += combinations[j-coins[i]];
		}
	}

	printf("%llu\n", combinations[total]);
	return 0;
}





