#include <stdio.h>

int main() {
    int originalArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int subArray[5]; // 用于存储子数组的数组

    // 指定要提取的子数组的起始和结束索引
    int startIndex = 2;
    int endIndex = 7;

    // 确保 endIndex 不超过原始数组的长度
    int originalArrayLength = sizeof(originalArray) / sizeof(originalArray[0]);
    if (endIndex > originalArrayLength) {
        endIndex = originalArrayLength;
    }

    // 使用循环将子数组复制到 subArray 数组中
    int j = 0;
    for (int i = startIndex; i < endIndex; i++) {
        subArray[j] = originalArray[i];
        j++;
    }

    // 打印结果
    printf("Original Array: ");
    for (int i = 0; i < originalArrayLength; i++) {
        printf("%d ", originalArray[i]);
    }

    printf("\nSub Array: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", subArray[i]);
    }

    return 0;
}
