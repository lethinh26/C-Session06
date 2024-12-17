#include <stdio.h> 
int main() {
	int password, save = 123456789;
	printf("Nhap mat khau: ");
	scanf("%d", &password);
	if (password == save) {
		printf("Mat khau dung roi!");
	}else {
		printf("Mat khau sai roi!");
	}
	return 0;
}
