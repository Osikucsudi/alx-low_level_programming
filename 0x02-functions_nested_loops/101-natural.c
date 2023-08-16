#include <stdio.h>

int main(void)
{
        int sum = 0;
        int h;

        for (h = 1 ; h <= 10 ; h++)
        {
                if (h % 3 == 0 || h % 5 == 0)
                        sum = sum + 1;
        }
        printf("%d\n", sum);
}             
