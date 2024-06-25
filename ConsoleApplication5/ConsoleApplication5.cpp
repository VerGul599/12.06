#include <stdio.h>

void plus(int x, int y)
{
    printf("x+y=%d \n", x + y);
}

void munys(int x, int y)
{
    printf("x-y=%d \n", x - y);
}

void ymnojenie(int x, int y)
{
    printf("x*y=%d \n", x * y);
}

int main(void)
{
    int a = 2;
    int b = 10;

    //тип(*имя_массива[размер]) (параметры)
    void (*prosto[3])(int, int) = { plus, munys, ymnojenie };

    int length = sizeof(prosto) / sizeof(prosto[0]);

    for (int i = 0; i < length; i++)
    {
        prosto[i](a, b);  
    }
    return 0;
}

