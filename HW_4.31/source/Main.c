#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    // 上半部分 (包括中間最長那一行)
    for (int i = 1; i <= 5; i++) 
    {
        for (int space = 1; space <= 5 - i; space++) 
        {
            printf(" ");
        }
        for (int star = 1; star <= 2 * i - 1; star++) 
        {
            printf("*");
        }
        printf("\n");
    }

    // 下半部分
    for (int i = 4; i >= 1; i--) 
    {
        for (int space = 1; space <= 5 - i; space++) 
        {
            printf(" ");
        }
        for (int star = 1; star <= 2 * i - 1; star++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}