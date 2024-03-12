#include<stdio.h>

void main()
{
    int i, j, temp, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter term %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Bubble sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}
