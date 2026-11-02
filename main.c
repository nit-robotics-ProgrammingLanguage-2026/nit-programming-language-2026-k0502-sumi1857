#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (10 <= input && input< 20 && input != 12/* TODO: ここに条件式を書く */)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
