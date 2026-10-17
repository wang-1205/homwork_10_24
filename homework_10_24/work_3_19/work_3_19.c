#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double principal,//貸款本金
            rate,//年利率
            interest;//單利金額
    int days;

    // 進入迴圈前讀取第一個本金
    printf("Enter loan principal (-1 to end): ");
    scanf("%lf", &principal);

    // 直接在 while 條件中判斷 principal 是否不等於 -1
    while (principal != -1.0) {
        printf("Enter interest rate: ");
        scanf("%lf", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365.0;
        printf("The interest charge is $%.2f\n\n", interest);

        // 迴圈末尾提示並讀取下一個本金
        printf("Enter loan principal (-1 to end): ");
        scanf("%lf", &principal);
    }

    return 0;
}