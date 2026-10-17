#include <stdio.h>

int main(void) {
    int length, breadth;

    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);

    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= breadth; j++) {
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}