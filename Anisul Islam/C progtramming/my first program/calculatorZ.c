#include <stdio.h>

int main()
{

    int choice;
    int num1, num2;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multi\n");
    printf("4. Divide\n");
    printf("Enter your choise (1-4):");
    scanf("%d", &choice);
    if (choice>=1 && choice<=4)
    {
        printf("Enter two number: ");
        scanf("%d %d", &num1, &num2);

        if (choice == 1)
        {
            printf("Result: %d\n", num1 + num2);
        }
        else if (choice == 2)
        {
            printf("Result: %d\n", num1 - num2);
        }
        else if (choice == 3)
        {
            printf("Result: %d\n", num1 * num2);
        }
        else if (choice == 4)
        {
            printf("Result: %d\n", num1 / num2);

        }
    }
    else
        printf("\aWrong input.");



    return (0);
}
