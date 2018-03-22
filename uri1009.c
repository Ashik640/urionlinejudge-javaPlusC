#include <stdio.h>
int main()
{
    char name;
    double sal, sel, total;
    scanf("%s %lf %lf", &name, &sal, &sel);
    sel = sel* .15;
    total = sal + sel;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
