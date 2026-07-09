#include <stdio.h>
#include <ctype.h>

int main() {
    char exp[100];
    int stack[100], top = -1;

    printf("Postfix: ");
    scanf("%s", exp);

    for (int i = 0; exp[i]; i++) {
        if (isdigit(exp[i]))
            stack[++top] = exp[i] - '0';
        else {
            int b = stack[top--];
            int a = stack[top--];

            switch (exp[i]) {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
            }
        }
    }

    printf("Answer = %d", stack[top]);
}