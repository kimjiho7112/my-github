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
    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf", &a);
    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf", &b);
    get_bigger(a, b);
    printf("\n20244470����ȣ");
    return 0;
}
