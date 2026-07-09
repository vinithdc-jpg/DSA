#include <stdio.h>
#include <string.h>

int main() {
    char exp[100], stack[100];
    int top = -1;

    printf("Expression: ");
    scanf("%s", exp);

    for (int i = 0; exp[i]; i++) {
        if (exp[i] == '(')
            stack[++top] = '(';
        else if (exp[i] == ')') {
            if (top == -1) {
                printf("Not Balanced");
                return 0;
            }
            top--;
        }
    }

    if (top == -1)
        printf("Balanced");
    else
        printf("Not Balanced");
}