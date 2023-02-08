#include <stdio.h>
int fibonacci(int fib);

int main()
{
    int fib;
    scanf("%d", &fib);
    for (int i = 0; i < fib; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int fib)
{
    int result;
    if (fib == 0)
    {
        return 0;
    }
    else if (fib == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(fib - 1) + fibonacci(fib - 2);
    }
}
