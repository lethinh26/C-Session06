#include <stdio.h>
int main() {
	int num1, num2, num3, num4, num5, result=0;
	printf("Nhap so nguyen thu 1: ");
	scanf("%d", &num1);
	printf("Nhap so nguyen thu 2: ");
	scanf("%d", &num2);
	printf("Nhap so nguyen thu 3: ");
	scanf("%d", &num3);
	printf("Nhap so nguyen thu 4: ");
	scanf("%d", &num4);
	printf("Nhap so nguyen thu 5: ");
	scanf("%d", &num5);
	
	if (num1 % 2 != 0) {
		result += num1;
	}
	if (num2 % 2 != 0) {
		result += num2;
	}
	if (num3 % 2 != 0) {
		result += num3;
	}
	if (num4 % 2 != 0) {
		result += num4;
	}
	if (num5 % 2 != 0) {
		result += num5;
	}
	printf("%d", result);
	return 0;
}
