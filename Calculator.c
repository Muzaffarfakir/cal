#include <stdio.h>
#include <conio.h>

void calculate()
{
    int a, b, c;
    char op;
    printf("Enter a First Number : ");
    scanf("%d", &a);
    printf("Enter a Second Name : ");
    scanf("%d", &b);
    printf("Enter a Operator : ");
    scanf(" %c", &op);

    if (op == '+')
    {
        c = a + b;
        printf("Calculation %d\n ", c);
    }
    if (op == '-')
    {
        c = a - b;
        printf("Calculation %d \n", c);
    }
    if (op == '*')
    {
        c = a * b;
        printf("Calculation %d \n", c);
    }
    if (op == '/')
    {
        c = a / b;
        printf("Calculation %d \n", c);
    }
}
int main()
{
    for (int i = 0; i < 100; i++)
    {
        calculate();
    }
