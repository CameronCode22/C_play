#include <stdio.h>

int x[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int main()
{
    int length = sizeof(x) / sizeof(x[0]);

    int i;
    for (i = 0; i < length; i++)
    {
        printf("%d\n", x[i]);
    }
}
