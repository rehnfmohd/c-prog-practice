#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;   // Uppercase → Lowercase
        printf("Lowercase: %c\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;   // Lowercase → Uppercase
        printf("Uppercase: %c\n", ch);
    }
    else {
        printf("Not an alphabet character.\n");
    }

    return 0;
}
