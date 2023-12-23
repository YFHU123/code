#include <stdio.h>
#include <math.h>

// 需求：把给定的符号打印成沙漏的形状，最后在一行中输出剩下没用掉的符号数。
// 例如：输入“17*”，输出：
//   *****
//    ***
//     *
//    ***
//   *****
//   0
// Tips:给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。

// 思路：
// 1. 求出沙漏一半图形的行数
// 2. 打印上半部分 +单独打印中心那一颗+打印下半部分
// 3. 打印未能用上的剩余符号数

int main()
{
    int n = 0;
    char c = 0;
    scanf("%d %c", &n, &c);
    int i = 0;
    int row = 0;
    for (i = 0; i < sqrt(n); i++)
    {
        if (2 * (i * i + 2 * i) + 1 > n) // 寻找能装下更多符号的沙漏的最大行数的一半（算上最中间的一行） i
        {
            row = i - 1;//上下半行等于最大行数一半 i-1
            break;
        }
    }

    // 打印上半部分
    for (i = row; i > 0; i--)
    {
        // 打印空格
        int j = 0;
        for (j = row - i; j > 0; j--)
        {
            printf(" ");
        }
        // 打印内容
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    // 打印中间
    for (i = 0; i < row; i++)
    {
        printf(" ");
    }
    printf("%c", c);
    printf("\n");

    // 打印下半部分
    for (i = 1; i <= row; i++)
    {
        // 打印空格
        int j = 0;
        for (j = 0; j < row - i; j++)
        {
            printf(" ");
        }
        // 打印内容
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    printf("%d", n - (2 * (row * row + 2 * row) + 1));
    return 0;
}