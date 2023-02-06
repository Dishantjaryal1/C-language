#include <stdio.h>
int main()
{
    int num1, num2, ans;
    char result;
    printf("result\n");
    scanf("%c", &result);

    printf("Enter the value of num1 and num2 \n");
    scanf("%d %d", &num1, &num2);

    switch (result)
    {
    case '+':
        ans = num1 + num2;
        printf("%d", ans);
        break;

    case '-':
        ans = num1 - num2;
        printf("%d", ans);
        break;

    case '*':
        ans = num1 * num2;
        printf("%d", ans);
        break;

    case '/':
        ans = num1 / num2;
        printf("%d", ans);
        break;

    case '&':
        ans = num1 + num2 / 2;
        printf("%d", ans);
        break;

    case '$':
        if (num1 > num2)
        {
            printf("%.2d is max", num1);
        }
        else
        {
            printf("%.2d is max", num2);
        }
        break;

    case '_':
        if (num2 < num1)
        {
            printf("%.2d is min", num2);
        }
        else
        {
            printf("%.2d is min", num1);
        }
        break;

    default:
        break;
    }

    return 0;
}