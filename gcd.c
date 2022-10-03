#include <stdio.h>

int main()
{
    int number1, number2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    while(number1 != number2)
    {
        if(number1 > number2) {
            number1 = number1 - number2;
        } else {
            number2 = number2 - number1;
        }
    }
    
    printf("GCD = %d", number1);

    return 0;
}
