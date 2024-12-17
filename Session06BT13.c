#include <stdio.h>
int main() {
	int day, month, check = 0;
	printf("Nhap ngay: ");
	scanf("%d", &day);
	printf("Nhap thang: ");
	scanf("%d", &month);
	
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: {
			check = (day > 0 && day <= 31)? 1:0;
			break;
		}
		case 2: {
			check = (day > 0 && day <= 29)? 1:0;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11: {
			check = (day > 0 && day <= 30)? 1:0;
			break;
		}
		default: {
			printf("Thang khong hop le");
			break;
		}
	}
	if (check == 1) {
		if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
			printf("Cung bach duong");
		}else if ((month == 4 && day >= 21) || (month == 5 && day <= 20)) {
			printf("Cung kim nguu");
		}else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
			printf("Cung song tu");
		}else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
			printf("Cung cu giai");
		}else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
			printf("Cung su tu");
		}else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
			printf("Cung xu nu");
		}else if ((month == 9 && day >= 23) || (month == 10 && day <= 23)) {
			printf("Cung thien binh");
		}else if ((month == 10 && day >= 24) || (month == 11 && day <= 22)) {
			printf("Cung bo cap");
		}else if ((month == 11 && day >= 23) || (month == 12 && day <= 21)) {
			printf("Cung nhan ma");
		}else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
			printf("Cung ma ket");
		}else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
			printf("Cung bao binh");
		}else {
			printf("Cung cu giai");
		}
	}else {
		printf("\nSo ngay khong hop le!");
	}
	return 0;
}
