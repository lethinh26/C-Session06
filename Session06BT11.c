#include <stdio.h>
int main() {
	int n, i=2, j, check, count=1;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	while(count <= n) {
		check = 1;
		j = 2;
		while (j < i) {
			if (i % j == 0) {
				check = 0;
				break;
			}
			j++;
		}
		if (check) {
			printf("%d ", i);
			count++;
		}
		i++;
	}
	return 0;
}
