#include "stdio.h"
#include "conio.h"
#include "math.h"
void main()
{
    float r, cv, dt;
    printf("\n Ban kinh r = ");
    scanf("%f", &r);
    cv = 2 * M_PI * r;dt = M_PI * r * r;
    printf("\n Chu vi = %0.2f\n Dien tich = %0.2f", cv, dt);
    getch();
}
