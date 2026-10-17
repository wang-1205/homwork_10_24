#include <stdio.h>

int main(void) {
    // 圖案 (A)
    printf("(A)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // 圖案 (B)
    printf("(B)\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // 圖案 (C)
    printf("(C)\n");
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= 10 - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // 圖案 (D)
    printf("(D)\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10 - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}