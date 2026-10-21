#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    // 圖形 (A)
    printf("(A)\n");
    for (int i = 1; i <= 10; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    // 圖形 (B)
    printf("\n(B)\n");
    for (int i = 10; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    // 圖形 (C)
    printf("\n(C)\n");
    for (int i = 10; i >= 1; i--) 
    {
        for (int space = 0; space < 10 - i; space++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    // 圖形 (D)
    printf("\n(D)\n");
    for (int i = 1; i <= 10; i++) 
    {
        for (int space = 0; space < 10 - i; space++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}