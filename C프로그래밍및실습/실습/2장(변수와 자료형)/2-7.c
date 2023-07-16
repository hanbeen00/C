#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char n;
	scanf("%c", &n);
	printf("%c is the %dth lower case letter in the English alphabet.", n, n - 'a');
}
