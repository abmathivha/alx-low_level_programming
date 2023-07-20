#include <stdio.h>

#define LARGEST 10000000000

int main(void)
{
    unsigned long int prevFib1 = 0, currentFib1 = 1, prevFib2 = 0, currentFib2 = 2;
    unsigned long int carry1, carry2, sum;
    int count;

    printf("%lu, %lu, ", currentFib1, currentFib2);

    for (count = 2; count < 98; count++)
    {
        if (currentFib1 + currentFib2 > LARGEST || prevFib2 > 0 || prevFib1 > 0)
        {
            carry1 = (currentFib1 + currentFib2) / LARGEST;
            carry2 = (currentFib1 + currentFib2) % LARGEST;
            sum = prevFib1 + prevFib2 + carry1;
            prevFib1 = prevFib2;
            prevFib2 = sum;
            currentFib1 = currentFib2;
            currentFib2 = carry2;
            printf("%lu%010lu", prevFib2, currentFib2);
        }
        else
        {
            carry2 = currentFib1 + currentFib2;
            prevFib1 = currentFib1;
            prevFib2 = currentFib2;
            currentFib1 = currentFib2;
            currentFib2 = carry2;
            printf("%lu", currentFib2);
        }

        if (count != 97)
            printf(", ");
    }

    printf("\n");
    return 0;
}
