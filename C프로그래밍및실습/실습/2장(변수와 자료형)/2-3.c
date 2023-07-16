#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n;
	scanf("%d", &n);
	char c=n;
	printf("(int->int) %d\n", n);
	printf("(int->char->int) %d\n", c);
}
