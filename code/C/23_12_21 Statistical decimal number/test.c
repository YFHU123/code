#include <stdio.h>

// 需求：给定一个整数K，统计里面几种不同数字出现的次数
// 例如:输入:100311
// 输出:
//         0:2
//         1:3
//         3:1

// Tips:对 K 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。
// 要求按 D 的升序输出。


int main(){
    char N[1001]={"\0"};
    char*p=N;
    int i,num[10]={0};
    scanf("%s",&N);
    while(*p!='\0')
    {
        num[*p-48]++;
        p++;
    }
    for(i=0;i<10;i++)
    {
        if(num[i]!=0)
        {
            printf("%d:%d\n",i,num[i]);
        }
    }
    return 0;
}