#include <stdio.h>

int main() {
    char seg_input[50];
    int num = 42;
    float f = 3.14;

    // 使用 sprintf 将数据格式化写入字符串
    sprintf(seg_input,"%04u",34);

    printf("seg_input = %s\n", seg_input);

    return 0;
}
