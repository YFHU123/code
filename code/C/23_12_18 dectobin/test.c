#include <stdio.h>

int num = 0;
int i = 0,j = 0;
int bin[32];

int main()
{
    int n ;
    scanf("%d",&n);
    num = dectobin(n);

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    return 0;

}

int  dectobin(int n)
{   
    
    while(n>0)
    {
        bin[i] = n%2;
        n/=2;
        i++;
    }
}