#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char n;
	scanf("%c", &n);
	printf("(%%c) %c\n", n);
	printf("(%%d) %d\n", n- '0');
}
