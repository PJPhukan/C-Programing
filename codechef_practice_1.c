//Q.Pooja would like to withdraw x $us from an ATM .The cash machine will only accept the transaction if x is a multiple of 5,and Pooja's account balanance has enough cash to perform the withdrawal transaction(including bank charges).For each successful withdrawal the bank charges 0.50 $US.
#include <stdio.h>
int main()
{
    int a;
    float b;
    scanf("%d", &a);
    scanf("%f", &b);
    if (a % 5 == 0)
    {
        float c;
        c = b - (float)a - 0.5;
        if (c < 0)
            printf("%.2f", b);
        else
            printf("%.2f", c);
    }
    else
    {
        printf("%.2f", b);
    }
    return 0;
}
