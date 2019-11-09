int mx_strcmp(const char *s1, const char *s2) {
	int i = 0;

	while (s1[i] == s2[i]) {
		if (s1[i] == '\0') {
			return s1[i] - s2[i];
		}
		i++;
	}
	return s1[i] - s2[i];
}

/*#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int main(void) {
    char s[] = "Hello";
    char ss[] = "Hello ";
    printf("%d\n", mx_strcmp(s, s));
    printf("%d\n", mx_strcmp(s, ss));
    printf("%d\n", mx_strcmp(ss, s));
}*/

