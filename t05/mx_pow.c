double mx_pow(double n, unsigned int pow) {
	if (pow == 0) {
		return 1;
	}
	double res = 1;

	for (unsigned int i = 0; i < pow; i++) {
		res *= n;
	}
	return res;
}

/*#include <stdio.h>


int main(void) {
	printf("%f\n", mx_pow(2, 0));
}*/

