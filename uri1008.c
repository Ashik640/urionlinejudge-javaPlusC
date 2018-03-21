#include <stdio.h>
int main()
{
    int num, amo;
    float ph, sal;
    scanf("%d %d", &num, &amo);
    scanf("%f", &ph);
    sal = ph * amo;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", sal);

    return 0;
}
