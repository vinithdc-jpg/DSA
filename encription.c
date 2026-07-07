#include <stdio.h>
#include <string.h>

int main() {

    char text[200];
    int shift;

    printf("Enter Text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter Shift Value: ");
    scanf("%d", &shift);

    // Encryption
    for(int i = 0; text[i] != '\0'; i++) {

        char ch = text[i];

        if(ch >= 'A' && ch <= 'Z') {

            text[i] = ((ch - 'A' + shift) % 26) + 'A';

        }

        else if(ch >= 'a' && ch <= 'z') {

            text[i] = ((ch - 'a' + shift) % 26) + 'a';

        }
    }

    printf("\nEncrypted Text: %s", text);

    // Decryption
    for(int i = 0; text[i] != '\0'; i++) {

        char ch = text[i];

        if(ch >= 'A' && ch <= 'Z') {

            text[i] = ((ch - 'A' - shift + 26) % 26) + 'A';

        }

        else if(ch >= 'a' && ch <= 'z') {

            text[i] = ((ch - 'a' - shift + 26) % 26) + 'a';

        }
    }

    printf("\nDecrypted Text: %s", text);

    return 0;
}