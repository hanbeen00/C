#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	int n;
	scanf("%d", &n);
	double k;
	k = (double)n / 1000+0.5;
	printf("%d", (int)k*1000);
	return 0;
}
