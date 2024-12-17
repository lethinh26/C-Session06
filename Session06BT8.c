#include <stdio.h>
int main() {
	int i, month;
	float money, total, interestRate;
	printf("Nhap so tien gui: ");
	scanf("%f", &money);
	printf("Nhap lai suat (%%): ");
	scanf("%f", &interestRate);
	printf("Nhap so thang gui: ");
	scanf("%d", &month);
	total = money;
	for (i=1; i<=month; i++) {
		total += total*(interestRate/100.0);
	}
	printf("Tien lai: %.3f\n", total-money);
	printf("Tien nhan duoc: %.3f", total);
	return 0;
}
