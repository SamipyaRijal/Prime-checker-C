#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int prime(int number)
{
    if (number == 1)
        return 0;
    
    if (number == 2)
            return 0;

    if (number%2 == 0)
        return 0;

    for (int i = 3; i < sqrt(number); i++)
        if (number%i == 0)
            return 0;

    return 1;
}

int main(void)
{
    int test_integer = 1;
    
    while (test_integer != 0){

        printf("Enter an integer'(type 0 to end)':");
            scanf("%d", &test_integer);
    
        if (prime(test_integer))
            printf("Number is Prime\n");

        else
            printf("Number is not Prime\n");

    }

    return 0;
}
