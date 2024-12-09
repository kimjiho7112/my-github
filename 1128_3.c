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

    printf("2�� �������� ��� a, b, c�� �Է��ϼ���: ");
    scanf("%d %d %d", &a, &b, &c);

    quadratic(a, b, c, &xplus, &xminus);

    if (xplus != -1) {
        printf("ù��° �Ǳ�: %.2f\n", xplus);
        printf("�ι�° �Ǳ�: %.2f\n", xminus);
    }
    else {
        printf("�� �������� �Ǽ� �ظ� ������ �ʽ��ϴ�.\n");
    }
    printf("\n 20244470 ����ȣ");
    return 0;
}
