#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    system("cls");
    int n;
    printf("Indeksga qiymat bering: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Arrayning %d indeksiga qiymat bering: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d    ", arr[i]);
    }
    puts("\nJuft indeks");
    printf("**********************\n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d    ", arr[i]);
        }
    }
    printf("\n**********************\n");
    puts("\nToq indeks");
    printf("**********************\n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d    ", arr[i]);
        }
    }
    printf("\n**********************\n");

    return 0;
}