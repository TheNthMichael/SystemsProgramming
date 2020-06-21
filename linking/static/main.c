#include <stdio.h>
#include <stdlib.h>
#include "mysum.h"


int main(int argc, char*argv[]) {
	if(argc < 3) {
		printf("Please run with two integer arguments\n");
	}
	int sum = mysum(atoi(argv[1]), atoi(argv[2]));
	printf("sum= %d\n", sum);

	return 0;
}
