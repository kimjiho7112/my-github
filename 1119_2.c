#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_divisors(int n) {
    printf("%d의 약수: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main2() {
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    get_divisors(num);
    printf("20244470김지호");
    return 0;
}