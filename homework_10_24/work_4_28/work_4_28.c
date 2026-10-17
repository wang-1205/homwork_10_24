#include <stdio.h>

int main(void) {
    int paycode;
    double weekly_pay, salary, hours, rate, sales, piece_price;
    int items;

    while (1) {
        printf("Enter paycode (-1 to end, 1:Manager, 2:Hourly, 3:Commission, 4:Pieceworker): ");
        if (scanf("%d", &paycode) != 1 || paycode == -1) break;

        switch (paycode) {
            case 1: // 經理
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                weekly_pay = salary;
                printf("Manager's weekly pay is $%.2f\n\n", weekly_pay);
                break;

            case 2: // 時薪工
                printf("Enter hourly rate: ");
                scanf("%lf", &rate);
                printf("Enter hours worked: ");
                scanf("%lf", &hours);
                if (hours <= 40.0) {
                    weekly_pay = hours * rate;
                } else {
                    weekly_pay = 40.0 * rate + (hours - 40.0) * rate * 1.5;
                }
                printf("Hourly worker's weekly pay is $%.2f\n\n", weekly_pay);
                break;

            case 3: // 佣金工
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                weekly_pay = 250.0 + sales * 0.057;
                printf("Commission worker's weekly pay is $%.2f\n\n", weekly_pay);
                break;

            case 4: // 計件工
                printf("Enter fixed amount per item: ");
                scanf("%lf", &piece_price);
                printf("Enter number of items produced: ");
                scanf("%d", &items);
                weekly_pay = piece_price * items;
                printf("Pieceworker's weekly pay is $%.2f\n\n", weekly_pay);
                break;

            default:
                printf("Invalid paycode! Please try again.\n\n");
                break;
        }
    }
    return 0;
}