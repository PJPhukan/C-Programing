// ATM machine code

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int oinr, ninr, winr, p;
    char ch = 'y';
    printf("\n");
    printf("------------------------------------------------\n");
    printf("-------------------  ATM Machine ----------------\n");
    printf("------------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("Enter your own amount  Rs.:");
    scanf("%d", &oinr);
    printf("\n");
    printf("Enter withdrawl amount  Rs. :");
    scanf("%d", &winr);
    printf("\n");
    ninr = winr - 3000;
    p = oinr - 3000 - winr;
    while (ch == 'y')
    {
        if (oinr > 3000 || winr > 3000)
        {
            if (ninr > 0)
            {
                printf("Your Transection sucsessful :\n");
                printf("Now avilabe amoumt in your account    %d Rs.\n", p);
                if (p > 0)
                {
                    printf("Do you want continue ?(y/n)");
                    scanf("%c", &ch);
                }
            }
            // else
            // {
            //     printf("Sorry !!! Not suficient amount in your account ");
            // }
        }
        else
        {
            printf("Sorry !!! Not suficient amount in your account ");
        }
    }
    printf("\n");
    printf("\n");
    printf("-----------Thank you--------");
    return 0;
}