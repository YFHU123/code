#include <stdio.h>
#include <math.h>

int num = 0,n = 0;
int Nar_num(int n);

int main()
{
    scanf("%d", &n);
    num = Nar_num(n);

    return 0;

}

int Nar_num(int n)
{
    int start = pow(10, n - 1);
    int end = pow(10, n);

    for (int i = start; i < end; i++)
     {
        int number = i;
        int sum = 0;

         while (number > 0) 
         {
            int bit = number % 10;
            sum += pow(bit, n);
            number /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
     }

    return n;
}