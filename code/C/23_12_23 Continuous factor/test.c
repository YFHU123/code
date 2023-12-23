#include <stdio.h>

// 需求：一个正整数 N 的因子中可能存在若干连续的数字。
// 例如 630 可以分解为 3×5×6×7，其中 5、6、7 就是 3 个连续的数字。
// 给定任一正整数 N，并输出最小的连续因子序列。

// Tips:
// 首先在第 1 行输出最长连续因子的个数；
// 然后在第 2 行中按 因子1*因子2*……*因子k 的格式输出最小的连续因子序列，其中因子按递增顺序输出，1 不算在内。

int prime(int num) // 判断素数
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
    long long n, i, j;
    scanf("%lld", &n);
    int start = 0, len = 0;
    long long s = 1;

    if (prime(n))
        printf("1\n%d\n", n);
    else
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            s = 1; // s记录乘积
            // i确定连续因子的左端，j滑动确定右端
            for (j = i; s * j <= n; j++)
            {
                s = s * j;
                // l记录连续因子序列的长度
                // n%s==0是找到满足条件的连续因子序列并且此时长度大于原来的则更新长度
                // eg:连续因子不是所有数都要连一起的，如题所说，630=3*5*6*7，
                // 当找到5*6这个连续序列时，n%s等于0,且长度可以更新为2，
                // 继续遍历，发现5*6*7这个连续序列也满足，同时还可以将长度更新为3
                if (n % s == 0 && j - i + 1 > len)
                {
                    start = i;       // 记录连续序列左端点
                    len = j - i + 1; // 不断更新l的值，求出最大的l
                }
            }
        }
        printf("%d\n", len);
        // 按照输出格式输出，连续因子 最长序列的开始点为start，长度为l
        for (i = start; i < start + len; i++)
        {
            if (i == start)
                printf("%lld", i);
            else
                printf("*%lld", i);
        }
        printf("\n");
    }
    return 0;
}
