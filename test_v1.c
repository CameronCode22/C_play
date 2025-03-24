#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 21, 11};
    int length = sizeof(x) / sizeof(x[0]);

    int *odd = malloc(length * sizeof(int));
    int *even = malloc(length * sizeof(int));
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < length; i++)
    {
        if (x[i] % 2 == 0)
            even[evenCount++] = x[i];
        else
            odd[oddCount++] = x[i];
    }

    printf("Even    Odd\n");

    int maxCount = (oddCount > evenCount) ? oddCount : evenCount; // Ensure both lists are printed fully
    for (int i = 0; i < maxCount; i++)
    {
        if (i < evenCount)
            printf("%d ", even[i]);
        else
            printf("  "); // Space if no even number

        if (i < oddCount)
            printf("%d\n", odd[i]);
        else
            printf("\n"); // Just a newline if no odd number
    }

    free(odd);
    free(even);

    return 0;
}
