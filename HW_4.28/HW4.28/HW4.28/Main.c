#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    int paycode;

    printf("Enter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) 
    {
        switch (paycode) 
        {
            case 1: 
            { // 經理
                double salary;
                printf("Enter weekly salary: ");
                scanf("%lf", &salary);
                printf("Manager's pay is $%.2f\n", salary);
                break;
            }
            case 2: 
            { // 時薪工
                double hours, rate, pay;
                printf("Enter hours worked: ");
                scanf("%lf", &hours);
                printf("Enter hourly rate: ");
                scanf("%lf", &rate);
                if (hours <= 40) 
                {
                    pay = hours * rate;
                }
                else 
                {
                    pay = 40 * rate + (hours - 40) * rate * 1.5;
                }
                printf("Hourly worker's pay is $%.2f\n", pay);
                break;
            }
            case 3: 
            { // 佣金制員工
                double gross_sales;
                printf("Enter gross weekly sales: ");
                scanf("%lf", &gross_sales);
                printf("Commission worker's pay is $%.2f\n", 250.0 + 0.057 * gross_sales);
                break;
            }
            case 4: 
            { // 計件工
                double number_of_items, pay_per_item;
                printf("Enter number of items produced: ");
                scanf("%lf", &number_of_items);
                printf("Enter pay per item: ");
                scanf("%lf", &pay_per_item);
                printf("Pieceworker's pay is $%.2f\n", number_of_items * pay_per_item);
                break;
            }
            default:
                printf("Invalid paycode entered.\n");
                break;
        }

        printf("\nEnter paycode (-1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}