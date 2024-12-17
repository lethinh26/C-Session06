#include <stdio.h>
int main() {
	int num, i, check=1;
	printf("Nhap so nguyen: ");
	scanf("%d", &num);
	for (i=2; i<num; i++) {
		if (num%i == 0) {
			check = 0;
			break;
		}
	}
	if (check) {
		printf("%d la so nguyen to",num);
	}else {
		printf("%d khong phai la so nguyen to",num);
	}
	return 0;
}
