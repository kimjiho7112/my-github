#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_bigger(double x, double y) {
    if (x > y)
        printf("%lf", x);
    else
        printf("%lf", y);
}

int main1() {
    double a, b;
    printf("실수를 입력하시오: ");
    scanf("%lf", &a);
    printf("실수를 입력하시오: ");
    scanf("%lf", &b);
    get_bigger(a, b);
    printf("\n20244470김지호");
    return 0;
}
