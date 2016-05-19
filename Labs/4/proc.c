#include "proc.h"
#include <math.h>
#include <stdio.h>

int process (float a, float b, float c) {

if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                printf("x - Luboe chislo");
            }
            else {
                printf("Korney net");
            }
        }
        else {
            printf ("x = %f", -c / b);
        }
    }
    else {

        float d;

        d = b * b - 4 * a * c;

        if(d < 0) {
            printf("Korney net");
        }
        else {
            if(d == 0) {
                printf("x = %f", -b / (2 * a));
            }
            else {
                printf("x1 = %f, x2 = %f", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
            }
        }
    }
}
