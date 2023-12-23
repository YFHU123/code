#include <stdio.h>
#include <string.h>

//需求：现有整数数组g_recvBuf[]里面存的是字符型变量，
//将里面的提取出来看是否符合格式startxxxxend，xxxx范围为1-9999

//思路：将整数数组g_recvBuf[]转换成字符型数组，再用strncmp判断

int g_recvBuf[] = {'s', 't', 'a', 'r', 't','1','2','3','4','e','n','d'};
char Array_start[5] = {'s', 't', 'a', 'r', 't'};

#define BUF_SIZE 100  // 适当选择缓冲区大小

    // 将整数数组转换为字符数组
    char charArray[BUF_SIZE];
    int i;
    
void check_format( int array)
{
   for (i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
   {
         charArray[i] = (char)array[i];
   }
   charArray[i] = '\0';  // 添加字符串结束符

   // 检查是否以 "start" 开头，以 "end" 结尾
    if (strncmp(charArray, "start", 5) == 0 &&
        strncmp(charArray + strlen(charArray) - 3, "end", 3) == 0) {
        // 提取 "start" 和 "end" 之间的部分
        char content[BUF_SIZE];
        strncpy(content, charArray + 5, strlen(charArray) - 8);
        content[strlen(charArray) - 8] = '\0';  // 添加字符串结束符

        // 将提取的部分转换为整数
        int value = atoi(content);

        // 检查整数是否在指定范围内
        if (value >= 1 && value <= 9999) {
            printf("符合格式，值为: %d\n", value);
        } else {
            printf("不符合范围\n");
        }
    } else {
        printf("不符合格式\n");
    }
}


int main()
{
   check_char(g_recvBuf);

    return 0;

}