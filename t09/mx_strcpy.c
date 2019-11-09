char *mx_strcpy(char *dst, const char *src) {
	int i = 0;
	
	while ((dst[i] = src[i]) != '\0') {
		i++;
	}
	return dst;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
    // char *s = "Hello";
    // char ss[10] = "";
    // mx_strcpy(ss, s);
    // printf("%s\n", ss);

    // s = "";
    // mx_strcpy(ss, s);
    // printf("%s\n", ss);
 
    // s = NULL;
    // mx_strcpy(ss, s);
    // printf("%s\n", ss);
    // printf("%s\n", strcpy(ss, s));
// }

