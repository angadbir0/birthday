#include <stdio.h>
int main() {
    int n, reversedN = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;  

    do {
        remainder = n % 10;  
        reversedN = reversedN * 10 + remainder;  
        n /= 10; 
    } while (n != 0); 
    if (original == reversedN) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
