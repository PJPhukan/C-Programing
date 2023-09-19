//LCB FAST FOOD
#include <stdio.h>
int main()
{
        int order, time;
        printf("How many dish");
        scanf("%d", &order);
        if (order <= 0)
        {
                printf("Order Confirmed");
        }
        else
        {
                if (order >= 4, &order <= 8)
                {

                        printf("Sorry, your orders are not available, if you want dish then wait some momement");
                        scanf("how many time wait for your dish, &time");
                }
                if (time >= 20 && time <= 11)
                {
                        printf("Your order confirmed");
                }
                else
                {
                        printf("Sorry");
                }
        }
return 0;
}

