#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double sales, salary;

    // 進入迴圈前先讀取第一次
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &sales);

    // 直接在 while 條件中判斷 sales 是否不等於 -1
    while (sales != -1.0) {
        salary = 200.0 + sales * 0.09;
        printf("Salary is: $%.2f\n\n", salary);

        // 迴圈末尾提示並讀取下一次
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
    }

    return 0;
}