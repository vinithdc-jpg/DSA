#include <stdio.h>
#include <string.h>

int main() {
    char str[100], stack[100];
    int top = -1;

    printf("Enter String: ");
    scanf("%s", str);

    for (int i = 0; str[i]; i++)
        stack[++top] = str[i];

    printf("Reversed: ");
    while (top != -1)
        printf("%c", stack[top--]);

    return 0;
}