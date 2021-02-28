#include <stdio.h>

int main() {

    int a;
    printf("Enter integer: ");
    scanf("%d", &a); //%lf, "&" a.

    if (a < 10) {
        printf("The number you entered is smaller than 10.\n", a);
    }
    else {
        printf("The number you entered is same or bigger than 10.\n", a);
    }
    
    printf("Press enter key to continue...\n");
    getch(); //The actual Press enter key to continue feature
    return 0;
}