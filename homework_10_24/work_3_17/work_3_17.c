#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int account;// 帳號
    double beginning_balance, // 月初餘額
            total_charges,//本月消費總額
            total_credits,//本月付款/退款總額
            credit_limit,//允許的信用額度
            new_balance;// 新餘額

    // 進入迴圈前先讀取第一個帳號
    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    // 直接在 while 條件中判斷 account 是否等於 -1
    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf("%lf", &beginning_balance);
        printf("Enter total charges: ");
        scanf("%lf", &total_charges);
        printf("Enter total credits: ");
        scanf("%lf", &total_credits);
        printf("Enter credit limit: ");
        scanf("%lf", &credit_limit);

        new_balance = beginning_balance + total_charges - total_credits;

        if (new_balance > credit_limit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", credit_limit);
            printf("Balance:      %.2f\n", new_balance);
            printf("Credit Limit Exceeded.\n");
        }
        printf("\n");

        // 迴圈末尾提示並讀取下一個帳號
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account);
    }

    return 0;
}