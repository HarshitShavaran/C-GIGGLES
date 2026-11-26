#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int isPalindrome = 1; 
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while (str[length] != '\0') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; 
            break;            
        }
    }
    if (isPalindrome == 1) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
