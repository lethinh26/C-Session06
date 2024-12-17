#include <stdio.h> 
#include <math.h>
int main() {
	int a, b, c, delta, x1, x2;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	delta = b*b - 4*a*c;
	if (a == 0) {
		printf("Day khong phai phuong trinh bac 2!");
		return 0;
	}
	if (delta > 0) {
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet: \nx1 = %d \nx2 = %d", x1, x2);
	}else if (delta < 0) {
		printf("Phuong trinh vo nghiem");
	}else {
		x1 = x2 = (-b)/2*a;
		printf("Phuong trinh co nghiem kep: x1 = x2 = %d", x1);
	}
	return 0;
}
