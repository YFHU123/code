#include <stdio.h>
#include <math.h>

// 需求：判断素数

int prime(int num)
{
    int i = 2;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0; // 不是素数
        }
    }
    return 1; // 是素数
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    int temp = prime(num);

    if (temp == 0)
    {
        printf("%d 不是素数", num);
    }
    else
    {
        printf("%d 是素数", num);
    }

    return 0;
}