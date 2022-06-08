#include <stdio.h>

int main() {

    printf("%c\n", 'a');
    printf("%d\n", '1');
    printf("%d\n", 'A');

    char ch;

    ch = getchar();

    if (ch >= 'A' && ch <= 'Z') {
        printf("Upper case\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lower case\n");
    }


    return (0);
}
