#include <stdio.h>

int main()
{
    int number;
    int octal[32];
    int i = 0;
    int j;

    printf("Enter a non-negative decimal number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    if (number == 0)
    {
        printf("Octal = 0\n");
        return 0;
    }

    while (number > 0)
    {
        octal[i] = number % 8;
        number = number / 8;
        i++;
    }

    printf("Octal = ");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", octal[j]);
    }

    printf("\n");

    return 0;
}
