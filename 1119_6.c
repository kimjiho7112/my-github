#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    printf("%d\n", sum);
    printf("20244470 ����ȣ\n");
    return 0;
}
