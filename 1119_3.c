#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int check_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main3() {
    for (int i = 1; i <= 100; i++) {
        if (check_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("20244470 ±èÁöÈ£\n");
    return 0;
}
