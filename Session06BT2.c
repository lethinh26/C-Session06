#include <stdio.h>
int main() {
	int num1, num2, num3, num4, num5, countEven = 0, countOdd = 0;
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
	
	if (num1 % 2 == 0) {
		countEven++;
	}else {
		countOdd++;
	}
	if (num2 % 2 == 0) {
		countEven++;
	}else {
		countOdd++;
	}
	if (num3 % 2 == 0) {
		countEven++;
	}else {
		countOdd++;
	}
	if (num4 % 2 == 0) {
		countEven++;
	}else {
		countOdd++;
	}
	if (num5 % 2 == 0) {
		countEven++;
	}else {
		countOdd++;
	}
	
	printf("Co %d so chan va %d so le", countEven, countOdd);
	return 0;
}
