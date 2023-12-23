#include <stdio.h>
#include "max.h"

int main()
{
    int a = 10;
    int b = 20;
    int c = max(a, b);
    printf("max(a,b) = %d", c);
    return 0;
}