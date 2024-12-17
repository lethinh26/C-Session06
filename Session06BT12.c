#include <stdio.h>
int main() {
	int n, i, num1=0, num2=1, num3=0;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	printf("%d ", num1);
	for (i=2; i<=n; i++) {
		num2 += num3;
		num3 = num1;
		num1 = num2;		
		printf("%d ", num1);
	}

	return 0;
}
