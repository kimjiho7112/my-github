#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void quad_eqn(double a, double b, double c) {
    double D = b * b - 4 * a * c;

    if (D > 0) {
        double sqrt_D = 0.0;
        double half_D = D / 2.0;
        double x = half_D;
        for (int i = 0; i < 10; i++) {
            sqrt_D = 0.5 * (x + D / x);
            x = sqrt_D;
        }

        double root1 = (-b + sqrt_D) / (2 * a);
        double root2 = (-b - sqrt_D) / (2 * a);
        printf("�� �Ǽ� ��: %.2lf, %.2lf\n", root1, root2);
    }
    else if (D == 0) {
        double root = -b / (2 * a);
        printf("�߱�: %.2lf\n", root);
    }
    else {
        printf("���� �����ϴ�.\n");
    }
}

int main5() {
    double a, b, c;

    printf("a, b, c ���� �Է��Ͻÿ�: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    quad_eqn(a, b, c);

    printf("20244470 ����ȣ\n");
    return 0;
}
