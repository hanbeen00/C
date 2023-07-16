#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char n;
	scanf("%c", &n);
	printf("%c", n-'a' + 'A');
}
