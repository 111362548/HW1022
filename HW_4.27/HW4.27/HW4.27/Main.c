#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
    printf("%-10s%-10s%-10s\n", "Side 1", "Side 2", "Hypotenuse");

    for (int side1 = 1; side1 <= 500; side1++) 
    {
        for (int side2 = 1; side2 <= 500; side2++) 
        {
            for (int hypotenuse = 1; hypotenuse <= 500; hypotenuse++) 
            {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) 
                {
                    printf("%-10d%-10d%-10d\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}