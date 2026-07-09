#include <stdio.h>

int main()
{
    int n, stack[32], top = -1;

    printf("Enter Number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        stack[++top] = n % 2;
        n /= 2;
    }

    printf("Binary: ");
    while (top != -1)
        printf("%d", stack[top--]);

    return 0;
}