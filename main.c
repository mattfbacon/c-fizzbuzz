#include <stdio.h>

void main() {
	for (size_t i = 1; i <= 100; i++) {
		printf("%lu\r", i);
		if (i % 3 == 0) fputs("Fizz", stdout);
		if (i % 5 == 0) fputs("Buzz", stdout);
		putchar('\n');
	}
}
