#include <stdio.h>

int main() {
    char str[100];
    int words = 1;

    printf("Enter a sentence: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            words++;
    }

    printf("Total Words = %d", words);

    return 0;
}