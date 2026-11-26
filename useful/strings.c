#include <stdio.h>
int main(void) {
    char a[] = "hello world\0";
    int i = 0;
    while (a[i] != '\0') {
        printf("%c",a[i]);
        i++;
    }
    return 0;
    printf("%s",a);
    scanf("%s",a);//get values || to user input multiple words we use "%[^\n]s",a

}
