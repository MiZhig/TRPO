#include <stdio.h>
#include <math.h>
#include "proc.h"

int main() {

    float a, b, c;

    printf("Vvedite a, b, c cherez probel: ");
    scanf("%f %f %f",&a, &b, &c);
    process(a, b, c);
    return 0;
}
