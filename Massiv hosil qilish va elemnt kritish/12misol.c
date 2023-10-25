#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    system("cls");
    int n;
    printf("Indeksga qiymat bering(juft bolsin): ");
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
    puts("");
    printf("\n*************************\n");
    for (int i = 0; i < n; i += 2)
    {
        printf("%d    ", arr[i]);
    }
    printf("\n*************************\n");

    return 0;
}