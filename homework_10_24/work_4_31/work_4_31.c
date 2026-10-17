#include <stdio.h>

int main(void) {
    int total_rows = 9;
    int mid = total_rows / 2;

    for (int i = 0; i < total_rows; i++) {
        int spaces = (i <= mid) ? (mid - i) : (i - mid);
        int stars = total_rows - 2 * spaces;

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}