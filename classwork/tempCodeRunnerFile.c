#include <stdio.h>
int main()
{
    int quantity, rate;
    printf("Enter the quantity\n");
    scanf("%d", &quantity);
    printf("Enter the rate\n");
    scanf("%d", &rate);

    if (quantity > 1000)
    {
        rate = (rate / 100) * 10;
    }
    printf("The quantity is : %d and rate is : %d", quantity, rate);
    return 0;
}