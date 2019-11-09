#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
	if (n == -2147483648) {
		write(1, "-2147483648", 11);
	}
	else if (n < 0) {
		mx_printchar('-');
		mx_printint(n * -1);
	}
	else if (n < 10) {
		mx_printchar(n + '0');
	}
	else {
		mx_printint(n / 10);
		mx_printchar(n % 10 + '0');
	}
}

/*#include <stdio.h>

int main(void) {
  int n;

  n = 25;
  printf("%d:\n", n);
  mx_printint(n);
  printf("\n----\n");

  n = 2147483647;
  printf("%d:\n", n);
  mx_printint(n);
  printf("\n----\n");
}*/

