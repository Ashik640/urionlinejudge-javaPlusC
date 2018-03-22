#include <stdio.h>
int main()
{
    double R, pi = 3.14159, VOL;
    scanf("%lf", &R);
    VOL = 4.0/3 * pi * R * R *R;
    printf("VOLUME = %.3lf\n", VOL);

    return 0;
}
