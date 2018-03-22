#include <stdio.h>
int main()
{
    int code1, code2, unit1, unit2;
    double price1, price2, pay;
    scanf("%d %d %lf", &code1, &unit1, &price1);
    scanf("%d %d %lf", &code2, &unit2, &price2);
    pay = (unit1 * price1) + (unit2 * price2);
    printf("VALOR A PAGAR: R$ %.2lf\n", pay);

    return 0;
}
