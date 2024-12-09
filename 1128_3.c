#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double* xplus, double* xminus) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        *xplus = (-b + sqrt(discriminant)) / (2 * a);
        *xminus = (-b - sqrt(discriminant)) / (2 * a);
    }
    else {
        *xplus = *xminus = -1;
    }
}

int main() {
    int a, b, c;
    double xplus, xminus;

    printf("2차 방정식의 계수 a, b, c를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    quadratic(a, b, c, &xplus, &xminus);

    if (xplus != -1) {
        printf("첫번째 실근: %.2f\n", xplus);
        printf("두번째 실근: %.2f\n", xminus);
    }
    else {
        printf("이 방정식은 실수 해를 가지지 않습니다.\n");
    }
    printf("\n 20244470 김지호");
    return 0;
}
