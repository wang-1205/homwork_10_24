#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 5000.0;
    int years = 15;

    for (double rate = 0.10; rate <= 0.1201; rate += 0.005) {
        printf("Interest Rate: %.1f%%\n", rate * 100);
        printf("Year%20s\n", "Amount on deposit");

        for (int year = 1; year <= years; year++) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }
        printf("\n");
    }
    return 0;
}