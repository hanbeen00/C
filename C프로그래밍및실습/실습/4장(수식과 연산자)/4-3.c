#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", n / 100 % 10);
	return 0;
}
