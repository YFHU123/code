#include <stdio.h>

//给定一个华氏温度F，计算对应的摄氏温度C。
//计算公式：C=5×(F−32)/9

int main()
{
    int F = 0,C = 0;
    scanf("%d",&F);
    C = 5*(F-32)/9;
    printf("Celsius = %d",C);
    return 0;

}