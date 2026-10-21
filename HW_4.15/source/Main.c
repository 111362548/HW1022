#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) 
{
    double principal = 5000.0;
    int years = 15;

    for (int rate_int = 100; rate_int <= 120; rate_int += 5) 
    {
        double rate = rate_int / 1000.0;
        printf("\nInterest Rate: %.1f%%\n", rate * 100);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        for (int year = 1; year <= years; year++) 
        {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }
    }

    return 0;
}