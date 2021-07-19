#include <stdio.h>

int main() {
	// loop from 1 to 10
	for (int a= 1; a <= 10; a++) {

		// If i is equals to 6,
		// continue to next iteration
		// without printing
		if (a == 4)
			continue;

		else
			// otherwise print the value of i
			printf("%d", a);
			
			printf("%d ", a);
	}

	return 0;