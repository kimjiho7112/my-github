#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    printf("%d\n", sum);
    printf("20244470 김지호\n");
    return 0;
}
