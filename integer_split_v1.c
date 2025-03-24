#include <stdio.h>

int x[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 21, 11};

int odd[12];  // could work on dynamic memory
int even[12]; // could work on dynamic memory

int oddCount = 0;
int evenCount = 0;

int main()
{
    int length = sizeof(x) / sizeof(x[0]);

    int i;
    for (i = 0; i < length; i++)
    {
        if (x[i] % 2 == 0)
        {
            even[evenCount] = x[i];
            evenCount++;
        }
        else if (x[i] % 2 == 1)
        {
            odd[oddCount] = x[i];
            oddCount++;
        }
    }

    printf("Even    Odd\n");
    for (i = 0; i < length; i++)
    {
        printf("%d   %d\n", odd[i], even[i]);
    }
}
