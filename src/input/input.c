#include <stdio.h>

int main() {
    double celcius;
    
    printf("Enter Celcius: ");
    scanf("%lf", &celcius);

    printf("%f degree Celcius in Ferenheit: %f\n", celcius, 9 * celcius / 5  + 32);
    return 0;
}