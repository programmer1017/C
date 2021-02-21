#include <stdio.h>

int main() {
    int a;
    a = 10;
    printf("The value of a is %d. \n", a);
    printf("\n");

    //////////////////////////////////////////////////////////////// Variable 2.


    int b;
    b = 127;
    printf("b is %d\n", b);
    printf("b in octal number: %o\n", b);
    printf("b in demical number: %d\n", b);
    printf("b in hexadecimal: %x\n", b);
    printf("\n");

    float c = 3.141592f;
    double d = 3.141592;
    printf("c: %f\n", c);
    printf("d: %f\n", d);
    printf("*c and d have different format.\n");
    printf("\n");
    // Program ends at this point...
    printf("Declaration: Program ended.\n");
    return 0; //Program exit with status code 0
}

