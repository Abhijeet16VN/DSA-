#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t;
    printf("Enter the character: ");
    scanf("%c", &t);

    if ((t >= '0' && t <= '9') || (tolower(t) >= 'a' && tolower(t) <= 'f')) {
        printf("The entered character is a hexadecimal digit.\n");
    } else {
        printf("Entered character is not a hexadecimal digit.\n");
    }

    return 0;
}
