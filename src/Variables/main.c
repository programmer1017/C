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

    printf("c: %.2f\n", c); //소수점 아래 2자리까지만 표기
    printf("d: %.5f\n", d); //소수점 아래 5자리까지만 표기

    float e = 1.2345678f;

    printf("e: %5f\n", e); //되도록 5자리로 표기
    printf("e: %6.3f\n", e); //되도록 6자리로 표기하되, 소수점 3자리까지만 표기.

    printf("\n");
    // Program ends at this point...
    printf("Declaration: Program ended.\n");
    return 0; //Program exit with status code 0
}


/*
변수 작명시 주의점

1. 숫자로 시작하면 안됨
2. C언어의 예약어이면 안됨(float, int, long, return 등)
3. 변수의 이름에 띄어쓰기가 있으면 안됨
4. 변수명은 오직 영어, 숫자, _(언더바) 로만 구성되어야 함
*/