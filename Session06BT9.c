#include <stdio.h>
int main() {
	int i, num, sum, divide;
    for (i = 100; i <= 999; i++) {
        num = i;
        sum = 0;
        while (num > 0) {
            divide = num % 10;
            sum += divide * divide * divide;
            num /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
