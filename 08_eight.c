#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z') {
        printf("The character is an uppercase letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a lowercase letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    }
    else {
        printf("The character '%c' is a special symbol.\n");
    }

    return 0;

}