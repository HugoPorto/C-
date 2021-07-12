#include <cstdio>

int main()
{
    double price = 99.80;

    double tax;

    tax = 0.08;

    double finalPrice = price * (1 + tax);

    printf("Final Price : %.2f.\n", finalPrice);
    printf("Teste : %d.", 35);

    return 0;
}