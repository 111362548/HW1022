#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    double principal, rate, interest;
    int days;

    printf("Enter loan principal (-1 to end): ");
    scanf("%lf", &principal);

    while (principal != -1.0) 
    {
        printf("Enter interest rate: ");
        scanf("%lf", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365.0;
        printf("The interest charge is $%.2f\n\n", interest);

        printf("Enter loan principal (-1 to end): ");
        scanf("%lf", &principal);
    }

    return 0;
}