#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int y;
	int m;
	int d;
	scanf("%d/%d/%d", &y, &m, &d);
	printf("year %04d month %02d date %02d", y, m, d);
}
