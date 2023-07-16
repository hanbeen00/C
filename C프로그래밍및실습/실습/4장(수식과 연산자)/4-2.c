#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n;
	scanf("%d", &n);
	int h, m, s;
	h = n / 3600;
	m = (n - h * 3600) / 60;
	s = (n - h * 3600 - m * 60);
	printf("%d:%d:%d", h, m, s);
	return 0;
}
