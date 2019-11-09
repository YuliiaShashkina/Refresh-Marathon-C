static int get_dec_digit(char c);

unsigned long mx_hex_to_nbr(const char *hex) {
	if (!hex) {
		return 0;
	}
	char *s = (char *) hex; //привидение типов
	unsigned long n = 0;
	
	while (*s) {
		n = 16 * n + get_dec_digit(*s);
		s++;
	}
	return n;
}

static int get_dec_digit(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	else if (c >= 'a' && c <= 'f') {
		return c - 'a' + 10;
	}
	else if (c >= 'A' && c <= 'F') {
		return c - 'A' + 10;
	}
	else {
		return 0;
	}
}



/*#include <stdio.h>

unsigned long mx_hex_to_nbr(const char *hex);

int main(void) {
  char num[] = "C4";
  printf("%s->%lu\n", num, mx_hex_to_nbr(num));
  return 0;
}*/
