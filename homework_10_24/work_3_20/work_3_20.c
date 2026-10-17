#include <stdio.h>

int main(void) {
    double hours, rate, salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%lf", &hours);

    while (hours != -1.0) {
        
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);

        if (hours <= 40.0) {
            salary = hours * rate;
        } else {
            salary = 40.0 * rate + (hours - 40.0) * rate * 1.5;
        }

        printf("Salary is $%.2f\n\n", salary);
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hours);
    }
    return 0;
}