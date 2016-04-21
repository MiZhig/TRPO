#include <stdio.h>
#include <math.h>
main()
{
    float a,b,c;
    printf("Vvedite a, b, c cherez probel: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                printf("x - Luboe chislo");
            }
            else
            {
                printf("Korney net");
            }
        }
        else
        {
            printf ("x = %g", -c/b);
        }
    }
