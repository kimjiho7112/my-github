#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main4() {
    int x = 3;
    for (int y = 0; y <= 10; y++) {
        printf("%d ", power(x, y));
    }
    printf("\n");
    printf("20244470±èÁöÈ£");
    return 0;
}